/*
 * AbstractConsumerSimulator.cpp
 *
 *  Created on: Apr 5, 2019
 *      Author: rosenau
 */

/*
 * AbstractConsumerSiumulator that provides all Set-Operation, Activation-Operation and Subscription-Capabilities
 * to control, request and process all information it gets from the Provider Under Test.
 *
 */

#include "osdm.hxx"

#include "OSELib/DPWS/DPWS11Constants.h"

#include "OSCLib/SDCLibrary.h"
#include "OSCLib/Data/SDC/SDCConsumer.h"
#include "OSCLib/Data/SDC/SDCConsumerConnectionLostHandler.h"
#include "OSCLib/Data/SDC/SDCConsumerMDStateHandler.h"
#include "OSCLib/Data/SDC/SDCProviderMDStateHandler.h"
#include "OSCLib/Data/SDC/SDCProvider.h"
#include "OSCLib/Data/SDC/MDIB/RealTimeSampleArrayMetricState.h"
#include "OSCLib/Data/SDC/MDIB/NumericMetricState.h"
#include "OSCLib/Data/SDC/MDIB/SampleArrayValue.h"
#include "OSCLib/Data/SDC/MDIB/MdState.h"
#include "OSCLib/Data/SDC/MDIB/custom/MdibContainer.h"
#include "OSCLib/Data/SDC/MDIB/ConvertToCDM.h"

#include "SDCParticipantMDStateForwarder.h"
#include "MirrorProvider.h"

#include "OSCLib/Util/DebugOut.h"

#include "OSELib/SDC/ServiceManager.h"
#include "OSELib/TCP/TCPClientEventHandler.h"

using namespace SDCLib;
using namespace SDCLib::Util;
using namespace SDCLib::Data::SDC;
using namespace SDCLib::Data::SDC::ACS;

const std::string deviceEPR("UDI-1234567890"); //needs to be configured

class SDCParticipantStreamStateForwarder : public SDCParticipantMDStateForwarder<RealTimeSampleArrayMetricState> {
public:
	SDCParticipantStreamStateForwarder(const std::string descriptorHandle) : SDCParticipantMDStateForwarder(descriptorHandle) {}

	RealTimeSampleArrayMetricState getInitialState() override {
		RealTimeSampleArrayMetricState realTimeSampleArrayState(SDCProviderMDStateHandler::descriptorHandle);
		realTimeSampleArrayState.setActivationState(ComponentActivation::On);
		return realTimeSampleArrayState;
	}
};

class SDCParticipantNumericStateForwarder : public SDCParticipantMDStateForwarder<NumericMetricState> {
public:
	SDCParticipantNumericStateForwarder(std::string descriptorHandle) : SDCParticipantMDStateForwarder(descriptorHandle) {}

	NumericMetricState getInitialState() override {
		NumericMetricState numericMetricState(SDCProviderMDStateHandler::descriptorHandle);
		numericMetricState.setActivationState(ComponentActivation::On);
		return numericMetricState;
	}
};

//class SDCParticipantAlertConditionStateForwarder : public SDCParticipantMDStateForwarder<AlertConditionState> {
//	SDCParticipantAlertConditionStateForwarder(std::string descriptorHandle) : SDCParticipantMDStateForwarder(descriptroHandle) {}
//
//	AlertConditionState getInitialState() override {
//		AlertConditionState alertConditionState(SDCProviderMDStateHandler::descriptorHandle);
//		return alertConditionState;
//	}
//};


void waitForUserInput() {
	std::string temp;
	Util::DebugOut(Util::DebugOut::Default, "") << "Press key to proceed.";
	std::cin >> temp;
}

static const std::string getStringRepresentationOfMDIB(const MdibContainer MDIB) {
	MDM::GetMdibResponse MdibResponse(xml_schema::Uri("0"),ConvertToCDM::convert(MDIB));
	MdibResponse.MdibVersion(MDIB.getMdibVersion());
	const xml_schema::Flags xercesFlags(xml_schema::Flags::dont_validate | xml_schema::Flags::no_xml_declaration | xml_schema::Flags::dont_initialize);
	xml_schema::NamespaceInfomap map;
	std::ostringstream providerMdibStringRepresentation;
	CDM::MdibContainer(providerMdibStringRepresentation, MdibResponse.Mdib(), map, OSELib::XML_ENCODING, xercesFlags);
	return providerMdibStringRepresentation.str();
}


int main() {
	Util::DebugOut(Util::DebugOut::Default, "ExampleConsumer") << "Startup";
    SDCLibrary::getInstance().startup(OSELib::LogLevel::Debug);
	SDCLibrary::getInstance().setPortStart(6000);

	//On connection loss inform Test orchestrator
    class MyConnectionLostHandler : public Data::SDC::SDCConsumerConnectionLostHandler {
    public:
    	MyConnectionLostHandler(Data::SDC::SDCConsumer & consumer) : consumer(consumer) {
    	}
    	void onConnectionLost() override {
    		std::cerr << "Connection lost, disconnecting... ";
    		consumer.disconnect();
    		std::cerr << "disconnected." << std::endl;
    	}
    private:
    	Data::SDC::SDCConsumer & consumer;
    };

	//Discovery of Device under Test
	OSELib::SDC::ServiceManager oscpsm;
	std::unique_ptr<Data::SDC::SDCConsumer> c(oscpsm.discoverEndpointReference(deviceEPR));


	try {
		if (c != nullptr) {
			Data::SDC::SDCConsumer & consumer = *c;
			std::unique_ptr<MyConnectionLostHandler> myHandler(new MyConnectionLostHandler(consumer));
			consumer.setConnectionLostHandler(myHandler.get());

			Util::DebugOut(Util::DebugOut::Default, "ExampleConsumer") << "Discovery succeeded." << std::endl << std::endl << "Waiting 5 sec. for the subscriptions to beeing finished";


			//initialize Mirror Provider which mirrors the behavior of the DUT
			MirrorProvider mirrorProvider;
			mirrorProvider.setEndpointReference("DUTMirrorProvider");
			Dev::DeviceCharacteristics devChar;
			devChar.addFriendlyName("en", "DUTMirrorProvider");
			mirrorProvider.setDeviceCharacteristics(devChar);
			mirrorProvider.setMdDescription(getStringRepresentationOfMDIB(consumer.getMdib()));
			std::cout << getStringRepresentationOfMDIB(consumer.getMdib());

			// create handler register them to the provider under test and connect them to the "mirror provider"
			std::map<std::string, std::shared_ptr<SDCParticipantStreamStateForwarder>> registeredStreamConsumerStateHandlers;

			//should be triggered???
			for (auto RealTimeSampleArrayMetricState :
					consumer.getMdib().getMdState().findRealTimeSampleArrayMetricStates())
			{
				std::string handleStreamMetric = RealTimeSampleArrayMetricState.getDescriptorHandle();
				Util::DebugOut(Util::DebugOut::Default, "AbstractConsumerSimulator") << handleStreamMetric << std::endl;
				std::shared_ptr<SDCParticipantStreamStateForwarder> eh_stream(new SDCParticipantStreamStateForwarder(handleStreamMetric));
				mirrorProvider.addMdStateHandler(eh_stream.get());
				consumer.registerStateEventHandler(eh_stream.get());
				registeredStreamConsumerStateHandlers.insert(std::make_pair(handleStreamMetric, eh_stream));
			}

			// create handler register them to the provider under test and connect them to the "mirror provider"
			std::map<std::string, std::shared_ptr<SDCParticipantNumericStateForwarder>> registeredNumericConsumerStateHandlers;
			for (auto NumericMetricState :
					consumer.getMdib().getMdState().findNumericMetricStates())
			{
				std::string handleNumericMetric = NumericMetricState.getDescriptorHandle();
				Util::DebugOut(Util::DebugOut::Default, "AbstractConsumerSimulator") << handleNumericMetric << std::endl;
				std::shared_ptr<SDCParticipantNumericStateForwarder> eh_numeric(new SDCParticipantNumericStateForwarder(handleNumericMetric));
				mirrorProvider.addMdStateHandler(eh_numeric.get());
				consumer.registerStateEventHandler(eh_numeric.get());
				registeredNumericConsumerStateHandlers.insert(std::make_pair(handleNumericMetric, eh_numeric));
			}

//			std::map<std::string, std::shared_ptr<SDCParticipantAlertConditionStateForwarder>> registeredAlertConditionStateForwarder;
//			for (auto AlertConditionState : consumer.getMdib().getMdState().findAlertConditionStates())
//			{
//				std::string handleAlertConditionState = AlertConditionState.getDescriptorHandle();
//				Util::DebugOut(Util::DebugOut::Default, "AbstractConsumerSimulator") << handleAlertConditionState << std::endl;
//				std::shared_ptr<SDCParticipantAlertConditionStateForwarder> eh_numeric(new SDCParticipantAlertConditionStateForwarder(handleNumericMetric));
//				mirrorProvider.addMdStateHandler(eh_numeric.get());
//				consumer.registerStateEventHandler(eh_numeric.get());
//				registeredAlertConditionStateForwarder.insert(std::make_pair(handleAlertConditionState, eh_numeric));
//			}


			mirrorProvider.startup();
			mirrorProvider.start();

			Poco::Thread::sleep(5000);

			std::cout << getStringRepresentationOfMDIB(mirrorProvider.getMdib());

			waitForUserInput(); // wait for finish from Test orchestrator
			// unregister all handler
			consumer.disconnect();
			mirrorProvider.shutdown();
		} else {
			Util::DebugOut(Util::DebugOut::Default, "ExampleConsumer") << "Discovery failed."; //Not debug out but inform orchestrator
		}

} catch (std::exception & e){
		Util::DebugOut(Util::DebugOut::Default, "ExampleConsumer") << "Exception: " << e.what() << std::endl; //Not debug out but inform orchestrator
	}
    SDCLibrary::getInstance().shutdown();
    Util::DebugOut(Util::DebugOut::Default, "ExampleConsumer") << "Shutdown." << std::endl; //Not debug out but inform orchestrator

}
