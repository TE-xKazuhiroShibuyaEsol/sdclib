/*
 * PulseOximeterProvider.h
 *
 *  Created on: Jun 19, 2019
 *      Author: rosenau
 */

#ifndef EXAMPLES_PULSEOXIMETERPROVIDER_PULSEOXIMETERPROVIDER_H_
#define EXAMPLES_PULSEOXIMETERPROVIDER_PULSEOXIMETERPROVIDER_H_

#include "SerialConnectionEventHandler.h"
#include "SDCLib/Data/SDC/SDCProvider.h"
#include "SDCLib/Data/SDC/MDIB/NumericMetricDescriptor.h"
#include "SDCLib/Data/SDC/MDIB/MdDescription.h"
#include "SDCLib/Data/SDC/MDIB/LimitAlertConditionDescriptor.h"
#include "SDCLib/Data/SDC/MDIB/AlertConditionDescriptor.h"
#include "SDCLib/Data/SDC/MDIB/MdState.h"
#include "SDCLib/Data/SDC/MDIB/VmdDescriptor.h"
#include "SDCLib/Data/SDC/MDIB/AlertSystemDescriptor.h"

#include "SDCLib/Util/Task.h"
#include "SDCLib/Data/SDC/MDIB/custom/MdibContainer.h"
#include "SDCLib/SDCInstance.h"

class PulseOximeterFingerOutGetHandler;
class PulseOximeterSatO2GetHandler;
class PulseOximeterPulseRateGetHandler;
class PulseOximeterAlertSystemState;
class SatO2AlertStateHandle;
class PulseOximeterAlarmLimitPulseRateHandler;
class PulseOximeterAlarmLimitSatO2Handler;
class PulseOximeterAlarmFingerOutHandler;


using namespace SDCLib;
using namespace SDCLib::Util;
using namespace SDCLib::Data::SDC;

class PulseOximeterProvider : public SDCLib::Util::Task{
public:
	PulseOximeterProvider(std::shared_ptr<SDCLib::SDCInstance> p_SDCInstance, const std::string& port);
	virtual ~PulseOximeterProvider();

	void setPort(int port);

	void setEndPointReference(std::string endPointReference);

	void startMedicalDevice();

	void startup();
	void shutdown();
	virtual void runImpl() override;

	MdibContainer getMdib();
	MdDescription getMdDescription();
	MdState getMdState();

private:

	void addAlertSystem(VmdDescriptor &vmdDesc);
	void addPulseRateLimitAlertCondition(AlertSystemDescriptor &alertSystemDesc);
	void addSatO2LimitAlertCondition(AlertSystemDescriptor &alertSystemDesc);
	void addFingerOutAlertCondition(AlertSystemDescriptor &alertSystemDesc);

	SDCLib::Data::SDC::SDCProvider sdcProvider;
	const std::string COMport;

	std::shared_ptr<PulseOximeterFingerOutGetHandler> fingerOutStatusHandler;
	std::shared_ptr<PulseOximeterSatO2GetHandler> satO2GetHandler;
	std::shared_ptr<PulseOximeterPulseRateGetHandler> pulseRateGetHandler;
	std::shared_ptr<PulseOximeterAlarmLimitPulseRateHandler> pulseRateAlarmLimitHandler;
	std::shared_ptr<PulseOximeterAlarmLimitSatO2Handler> satO2AlarmLimitHandler;
	std::shared_ptr<PulseOximeterAlarmFingerOutHandler> fingerAlarmHandler;
	NumericMetricDescriptor satO2Descriptor;
	NumericMetricDescriptor pulseRateDescriptor;
	AlertSystemDescriptor pulseOximeterAlertSystemDescriptor;


	std::shared_ptr<Serial::SerialConnectionEventHandler> serial;
};



#endif /* EXAMPLES_PULSEOXIMETERPROVIDER_PULSEOXIMETERPROVIDER_H_ */
