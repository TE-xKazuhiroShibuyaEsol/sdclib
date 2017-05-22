/*
 * ConvertFromCDM.h
 *
 *  Created on: 26.01.2015
 *      Author: roehser
 */

#ifndef DATA_OSCP_MDIB_CONVERTFROMCDM_H_
#define DATA_OSCP_MDIB_CONVERTFROMCDM_H_

#include "OSCLib/Data/OSCP/MDIB/custom/EnumMappings.h"
#include "OSCLib/Data/OSCP/MDIB/custom/MDIB-fwd.h"
#include "osdm-fwd.hxx"

namespace OSCLib {
namespace Data {
namespace OSCP {

class ConvertFromCDM {
public:
	ConvertFromCDM();
	virtual ~ConvertFromCDM();

	static bool convert(const bool & source);
	static double convert(const double & source);
	static unsigned int convert(const unsigned int & source);
	static unsigned short int convert(const unsigned short int & source);
	static int convert(const int & source);
	static long convert(const long & source);
	static long long convert(const long long & source);
	static std::string convert(const std::string & source);

	static ActivateOperationDescriptor convert(const CDM::ActivateOperationDescriptor & source);
	static AlertActivation convert(const CDM::AlertActivation & source);
	static AlertConditionDescriptor convert(const CDM::AlertConditionDescriptor & source);
	static AlertConditionKind convert(const CDM::AlertConditionKind & source);
	static AlertConditionMonitoredLimits convert(const CDM::AlertConditionMonitoredLimits & source);
	static AlertConditionPriority convert(const CDM::AlertConditionPriority & source);
	static AlertConditionReference convert(const CDM::AlertConditionReference & source);
	static AlertConditionState convert(const CDM::AlertConditionState & source);
	static AlertSignalDescriptor convert(const CDM::AlertSignalDescriptor & source);
	static AlertSignalManifestation convert(const CDM::AlertSignalManifestation & source);
	static AlertSignalState convert(const CDM::AlertSignalState & source);
	static AlertSystemDescriptor convert(const CDM::AlertSystemDescriptor & source);
	static AlertSystemState convert(const CDM::AlertSystemState & source);
	static ApplyAnnotation  convert(const CDM::ApplyAnnotation & source);
	static Base64Binary convert(const CDM::Base64Binary & source);
	static BaseDemographics convert(const CDM::BaseDemographics & source);
	static CalibrationInfo convert(const CDM::CalibrationInfo & source);
	static CalibrationState convert(const CDM::CalibrationState & source);
	static CalibrationType convert(const CDM::CalibrationType & source);
	static CauseInfo convert(const CDM::CauseInfo & source);
	static ChannelDescriptor convert(const CDM::ChannelDescriptor & source);
	static ClinicalInfo convert(const CDM::ClinicalInfo & source);
	static ClockDescriptor convert(const CDM::ClockDescriptor & source);
	static ClockState convert(const CDM::ClockState & source);
	static CodedValue convert(const CDM::CodedValue & source);
	static ComponentActivation convert(const CDM::ComponentActivation & source);
	static ContextAssociation convert(const CDM::ContextAssociation & source);
	static DateTime convert(const CDM::DateTime & source);
	static DicomDeviceDescriptor convert(const CDM::DicomDeviceDescriptor & source);
	static DicomNetworkAe convert(const CDM::DicomNetworkAe  & source);
	static DicomNetworkConnection convert(const CDM::DicomNetworkConnection & source);
	static DicomTransferCapability convert(const CDM::DicomTransferCapability & source);
	static DicomTransferRole convert(const CDM::DicomTransferRole & source);
	static Duration convert(const CDM::Duration & source);
	static EnsembleContextDescriptor convert(const CDM::EnsembleContextDescriptor & source);
	static EnsembleContextState convert(const CDM::EnsembleContextState & source);
	static AllowedValue convert(const CDM::AllowedValue & source);
	static EnumStringMetricDescriptor convert(const CDM::EnumStringMetricDescriptor & source);
	static EnumStringMetricState convert(const CDM::EnumStringMetricState & source);
	static GenerationMode convert(const CDM::GenerationMode & source);
	static MdsDescriptor convert(const CDM::MdsDescriptor & source);
	static MdsState convert(const CDM::MdsState & source);
	static ImagingProcedure convert(const CDM::ImagingProcedure & source);
	static InstanceIdentifier convert(const CDM::InstanceIdentifier & source);
	static InvocationState convert(const MDM::InvocationState & source);
	static Language convert(const CDM::Language & source);
	static LimitAlertConditionDescriptor convert(const CDM::LimitAlertConditionDescriptor & source);
	static LimitAlertConditionState convert(const CDM::LimitAlertConditionState & source);
	static LocalizedText convert(const CDM::LocalizedText & source);
	static LocationContextDescriptor convert(const CDM::LocationContextDescriptor & source);
	static LocationContextState convert(const CDM::LocationContextState & source);
	static LocationReference convert(const CDM::LocationReference & source);
	static MdDescription convert(const CDM::MdDescription & source);
	static MdsOperatingMode convert(const CDM::MdsOperatingMode & source);
	static MdState convert(const CDM::MdState & source);
	static MeansContextDescriptor convert(const CDM::MeansContextDescriptor & source);
	static Measurement convert(const CDM::Measurement & source);
	static MetricAvailability convert(const CDM::MetricAvailability & source);
	static MetricCategory convert(const CDM::MetricCategory & source);
	static MeasurementValidity convert(const CDM::MeasurementValidity & source);
	static NumericMetricDescriptor convert(const CDM::NumericMetricDescriptor & source);
	static NumericMetricState convert(const CDM::NumericMetricState & source);
	static NumericMetricValue convert(const CDM::NumericMetricValue & source);
	static OperatingMode convert(const CDM::OperatingMode & source);
	static OperatorContextDescriptor convert(const CDM::OperatorContextDescriptor & source);
	static OperatorContextState convert(const CDM::OperatorContextState & source);
	static OrderDetail convert(const CDM::OrderDetail & source);
	static PatientContextDescriptor convert(const CDM::PatientContextDescriptor & source);
	static PatientContextState convert(const CDM::PatientContextState & source);
	static PatientDemographicsCoreData convert(const CDM::PatientDemographicsCoreData & source);
	static PatientType convert(const CDM::PatientType & source);
	static PerformedOrderDetail convert(const CDM::PerformedOrderDetail & source);
	static PersonParticipation convert(const CDM::PersonParticipation & source);
	static PersonReference convert(const CDM::PersonReference & source);
	static AlertSignalPrimaryLocation convert(const CDM::AlertSignalPrimaryLocation & source);
	static ProductionSpecification convert(const CDM::ProductionSpecification & source);
	static Range convert(const CDM::Range & source);
	static RealTimeSampleArrayMetricDescriptor convert(const CDM::RealTimeSampleArrayMetricDescriptor & source);
	static RealTimeSampleArrayMetricState convert(const CDM::RealTimeSampleArrayMetricState & source);
	static SampleArrayValue convert(const CDM::SampleArrayValue  & source);
	static ReferencedVersion convert(const CDM::ReferencedVersion & source);
	static RemedyInfo convert(const CDM::RemedyInfo & source);
	static RequestedOrderDetail convert(const CDM::RequestedOrderDetail & source);
	static RealTimeValueType convert(const CDM::RealTimeValueType & source);
	static SafetyClassification convert(const CDM::SafetyClassification & source);
	static ScoDescriptor convert(const CDM::ScoDescriptor & source);
	static SetAlertStateOperationDescriptor convert(const CDM::SetAlertStateOperationDescriptor & source);
	static SetContextStateOperationDescriptor convert(const CDM::SetContextStateOperationDescriptor & source);
	static SetStringOperationDescriptor convert(const CDM::SetStringOperationDescriptor & source);
	static SetValueOperationDescriptor convert(const CDM::SetValueOperationDescriptor & source);
	static Sex convert(const CDM::Sex & source);
	static AlertSignalPresence convert(const CDM::AlertSignalPresence & source);
	static StringMetricDescriptor convert(const CDM::StringMetricDescriptor & source);
	static StringMetricState convert(const CDM::StringMetricState & source);
	static StringMetricValue convert(const CDM::StringMetricValue & source);
	static SystemContextDescriptor convert(const CDM::SystemContextDescriptor & source);
	static SystemContextState convert(const CDM::SystemContextState & source);
	static MetaData convert(const CDM::MetaData & source);
	static Timestamp convert(const CDM::Timestamp & source);
	static TimeZone convert(const CDM::TimeZone & source);
	static VersionCounter convert(const CDM::VersionCounter & source);
	static VmdDescriptor convert(const CDM::VmdDescriptor & source);
	static WorkflowContextDescriptor convert(const CDM::WorkflowContextDescriptor & source);
	static WorkflowContextState convert(const CDM::WorkflowContextState & source);
	static WorkflowDetail convert(const CDM::WorkflowDetail & source);
};

} /* namespace OSCP */
} /* namespace Data */
} /* namespace OSCLib */

#endif /* DATA_OSCP_MDIB_CONVERTFROMCDM_H_ */
