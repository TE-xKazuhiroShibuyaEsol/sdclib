/*
 * NamigConvention.h
 *
 *  Created on: Jul 22, 2019
 *      Author: rosenau
 */
#include <string>

#ifndef EXAMPLES_ABSTRACTCONSUMERSIMULATOR_NAMIGCONVENTION_H_
#define EXAMPLES_ABSTRACTCONSUMERSIMULATOR_NAMIGCONVENTION_H_

namespace SDCLib {
namespace Data {
namespace SDC {
namespace ACS {

const std::string ACTIVATE_FOR_GET_OPERATION_ON_DUT_POSTFIX = "_REQUEST_ACTION_BB";
const std::string ACTIVATE_FOR_SUBSCRIBE_OPERATION_ON_DUT_POSTFIX = "_SUBSCRIBE_ACTION_BB";
const std::string DEFAULT_ENDPOINTREFERENCE_DISCOVERY_PROVIDER = "DEVICE_UNDER_TEST_DISCOVERY_PROVIDER_BB";
const std::string DISCOVERY_PROVIDER_CHANNEL = "DISCOVERY_PROVIDER_CHANNEL_BB";
const std::string DISCOVERY_PROVIDER_VMD = "DISCOVERY_PROVIDER_VMD_BB";
const std::string DISCOVERY_PROVIDER_MDS = "DISCOVERY_PROVIDER_MDS_BB";
const std::string SET_DEVICE_UNDER_TEST_ENDPOINT_REF = "SET_DUT_ENDPOINT_REFERENCE_STRING_BB";
const std::string DISCOVER_AVAILABLE_ENDPOINT_REFERENCES = "DISCOVER_AVAILABLE_ENPOINT_REFERENCES_ACTION_BB";
const std::string DISCOVER_DEVICE_UNDER_TEST = "DISCOVER_DEVICE_UNDER_TEST_ACTION_BB";
const std::string SET_MIRROR_PROVIDER_ENDPOINT_REF = "SET_MIRROR_PROVIDER_ENDPOINT_REFERENCE_STRING_BB";
const std::string GET_AVAILABLE_ENDPOINT_REFERENCES = "GET_AVAILABLE_ENDPOINT_REFERENCES_STRING_BB";
const std::string SETUP_MIRROR_PROVIDER = "SETUP_MIRROR_PROVIDER_ACTION_BB";
const std::string STRING_UNIT = "MDC_DIM_DIMLESS";


} //ACS
} //SDC
} //Data
} //SDCLib
#endif /* EXAMPLES_ABSTRACTCONSUMERSIMULATOR_NAMIGCONVENTION_H_ */
