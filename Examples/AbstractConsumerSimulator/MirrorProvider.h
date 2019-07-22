/*
 * MirrorProvider.h
 *
 *  Created on: Apr 10, 2019
 *      Author: rosenau
 */

#ifndef EXAMPLES_ABSTRACTCONSUMERSIMULATOR_MIRRORPROVIDER_H_
#define EXAMPLES_ABSTRACTCONSUMERSIMULATOR_MIRRORPROVIDER_H_

#include "SDCLib/SDCInstance.h"

#include "SDCLib/Data/SDC/SDCProvider.h"
#include "SDCLib/Data/SDC/MDIB/custom/MdibContainer.h"

#include "SDCLib/Util/Task.h"

using namespace SDCLib;
using namespace SDCLib::Util;
using namespace SDCLib::Data::SDC;

class MirrorProvider : public Util::Task {
public:
	MirrorProvider(SDCInstance_shared_ptr p_SDCInstance);
	virtual ~MirrorProvider() = default;

	void setEndpointReference(const std::string & epr);
	const std::string getEndpointReference();

	void setDeviceCharacteristics(const Dev::DeviceCharacteristics devChar);

    void createSetOperationForDescriptor(const NumericMetricDescriptor& descriptor, MdsDescriptor & ownerMDS);

	void startup();
	void shutdown();
	void addMdStateHandler(SDCProviderStateHandler * handler);

	virtual void runImpl() override;

	void setMdDescription(const std::string xml);

	MdibContainer getMdib();


private:
	SDCProvider sdcProvider;


};


#endif /* EXAMPLES_ABSTRACTCONSUMERSIMULATOR_MIRRORPROVIDER_H_ */