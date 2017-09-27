/*
 * ConvertFromCDM.h
 *
 *  Created on: 22.06.2017
 *      Author: buerger
 *
 *  This file is autogenerated.
 *
 *  Do not edit this file. For customization please edit the ConvertFromCDM_beginning.hxx or ConvertFromCDM_ending.hxx
 */

#ifndef DATA_OSCP_MDIB_CONVERTFROMCDM_H_
#define DATA_OSCP_MDIB_CONVERTFROMCDM_H_

#include "OSCLib/Data/OSCP/MDIB/SimpleTypesMapping.h"
#include "OSCLib/Data/OSCP/MDIB/MDIB-fwd.h"
#include "osdm-fwd.hxx"

namespace OSCLib {
namespace Data {
namespace OSCP {

class ConvertFromCDM {
public:
	ConvertFromCDM();
	virtual ~ConvertFromCDM();

	// build-in type conversions for the basetyes (see typedefs in SimpleTypesMapping.h)
	static bool convert(const bool & source);
	static double convert(const double & source);
	static unsigned int convert(const unsigned int & source);
	static int convert(const int & source);
	static long convert(const long & source);
	static long long convert(const long long & source);
	static std::string convert(const std::string & source);
	static unsigned short int convert(const unsigned short int & source);
	static unsigned long convert(const unsigned long & source);
	static unsigned long long convert(const unsigned long long & source);
	static xml_schema::Duration convert(const xml_schema::Duration & source);
	static xml_schema::Qname convert(const xml_schema::Qname & source);
	static xml_schema::Language convert(const xml_schema::Language & source);
	static xml_schema::Uri convert(const xml_schema::Uri & source);
	static xml_schema::DateTime convert(const xml_schema::DateTime & source);
	static xml_schema::Idrefs convert(const xml_schema::Idrefs & source);
	static xml_schema::Id convert(const xml_schema::Id & source);

	static InvocationState convert(const MDM::InvocationState & source);

	// autogenerated here
	static DicomTransferRole convert(const CDM::DicomTransferRole & source);
	static MeasurementValidity convert(const CDM::MeasurementValidity & source);
	static SafetyClassification convert(const CDM::SafetyClassification & source);
	static ComponentActivation convert(const CDM::ComponentActivation & source);
	static CalibrationState convert(const CDM::CalibrationState & source);
	static CalibrationType convert(const CDM::CalibrationType & source);
	static MdsOperatingMode convert(const CDM::MdsOperatingMode & source);
	static AlertActivation convert(const CDM::AlertActivation & source);
	static AlertConditionKind convert(const CDM::AlertConditionKind & source);
	static AlertConditionPriority convert(const CDM::AlertConditionPriority & source);
	static AlertConditionReference convert(const CDM::AlertConditionReference & source);
	static AlertConditionMonitoredLimits convert(const CDM::AlertConditionMonitoredLimits & source);
	static AlertSignalManifestation convert(const CDM::AlertSignalManifestation & source);
	static AlertSignalPresence convert(const CDM::AlertSignalPresence & source);
	static AlertSignalPrimaryLocation convert(const CDM::AlertSignalPrimaryLocation & source);
	static GenerationMode convert(const CDM::GenerationMode & source);
	static RealTimeValueType convert(const CDM::RealTimeValueType & source);
	static MetricCategory convert(const CDM::MetricCategory & source);
	static DerivationMethod convert(const CDM::DerivationMethod & source);
	static MetricAvailability convert(const CDM::MetricAvailability & source);
	static OperatingMode convert(const CDM::OperatingMode & source);
	static ContextAssociation convert(const CDM::ContextAssociation & source);
	static Sex convert(const CDM::Sex & source);
	static PatientType convert(const CDM::PatientType & source);
	static DicomTransferCapability convert(const CDM::DicomTransferCapability & source);
	static DicomNetworkAe convert(const CDM::DicomNetworkAe & source);
	static DicomNetworkConnection convert(const CDM::DicomNetworkConnection & source);
	static DicomDeviceDescriptor convert(const CDM::DicomDeviceDescriptor & source);
	static Mdib convert(const CDM::Mdib & source);
	static MdDescription convert(const CDM::MdDescription & source);
	static MdState convert(const CDM::MdState & source);
	static TextWidth convert(const CDM::TextWidth & source);
	static LocalizedText convert(const CDM::LocalizedText & source);
	static CodedValue convert(const CDM::CodedValue & source);
	static InstanceIdentifier convert(const CDM::InstanceIdentifier & source);
	static Range convert(const CDM::Range & source);
	static Measurement convert(const CDM::Measurement & source);
	static ApprovedJurisdictions convert(const CDM::ApprovedJurisdictions & source);
	static OperatingJurisdiction convert(const CDM::OperatingJurisdiction & source);
	static ProductionSpecification convert(const CDM::ProductionSpecification & source);
	static CalibrationInfo convert(const CDM::CalibrationInfo & source);
	static MdsDescriptor convert(const CDM::MdsDescriptor & source);
	static MetaData convert(const CDM::MetaData & source);
	static Udi convert(const CDM::Udi & source);
	static MdsState convert(const CDM::MdsState & source);
	static VmdDescriptor convert(const CDM::VmdDescriptor & source);
	static VmdState convert(const CDM::VmdState & source);
	static ChannelDescriptor convert(const CDM::ChannelDescriptor & source);
	static ChannelState convert(const CDM::ChannelState & source);
	static SystemSignalActivation convert(const CDM::SystemSignalActivation & source);
	static AlertSystemDescriptor convert(const CDM::AlertSystemDescriptor & source);
	static AlertSystemState convert(const CDM::AlertSystemState & source);
	static CauseInfo convert(const CDM::CauseInfo & source);
	static RemedyInfo convert(const CDM::RemedyInfo & source);
	static CanEscalate convert(const CDM::CanEscalate & source);
	static CanDeescalate convert(const CDM::CanDeescalate & source);
	static AlertConditionDescriptor convert(const CDM::AlertConditionDescriptor & source);
	static AlertConditionState convert(const CDM::AlertConditionState & source);
	static LimitAlertConditionDescriptor convert(const CDM::LimitAlertConditionDescriptor & source);
	static LimitAlertConditionState convert(const CDM::LimitAlertConditionState & source);
	static AlertSignalDescriptor convert(const CDM::AlertSignalDescriptor & source);
	static AlertSignalState convert(const CDM::AlertSignalState & source);
	static MetricQuality convert(const CDM::MetricQuality & source);
	static Annotation convert(const CDM::Annotation & source);
	static NumericMetricValue convert(const CDM::NumericMetricValue & source);
	static StringMetricValue convert(const CDM::StringMetricValue & source);
	static SampleArrayValue convert(const CDM::SampleArrayValue & source);
	static ApplyAnnotation convert(const CDM::ApplyAnnotation & source);
	static Kind convert(const CDM::Kind & source);
	static Relation convert(const CDM::Relation & source);
	static NumericMetricDescriptor convert(const CDM::NumericMetricDescriptor & source);
	static NumericMetricState convert(const CDM::NumericMetricState & source);
	static StringMetricDescriptor convert(const CDM::StringMetricDescriptor & source);
	static StringMetricState convert(const CDM::StringMetricState & source);
	static EnumStringMetricDescriptor convert(const CDM::EnumStringMetricDescriptor & source);
	static AllowedValue convert(const CDM::AllowedValue & source);
	static EnumStringMetricState convert(const CDM::EnumStringMetricState & source);
	static RealTimeSampleArrayMetricDescriptor convert(const CDM::RealTimeSampleArrayMetricDescriptor & source);
	static RealTimeSampleArrayMetricState convert(const CDM::RealTimeSampleArrayMetricState & source);
	static DistributionSampleArrayMetricDescriptor convert(const CDM::DistributionSampleArrayMetricDescriptor & source);
	static DistributionSampleArrayMetricState convert(const CDM::DistributionSampleArrayMetricState & source);
	static ScoDescriptor convert(const CDM::ScoDescriptor & source);
	static ScoState convert(const CDM::ScoState & source);
	static SetValueOperationDescriptor convert(const CDM::SetValueOperationDescriptor & source);
	static SetValueOperationState convert(const CDM::SetValueOperationState & source);
	static SetStringOperationDescriptor convert(const CDM::SetStringOperationDescriptor & source);
	static SetStringOperationState convert(const CDM::SetStringOperationState & source);
	static AllowedValues convert(const CDM::AllowedValues & source);
	static ActivateOperationDescriptor convert(const CDM::ActivateOperationDescriptor & source);
	static Argument convert(const CDM::Argument & source);
	static ActivateOperationState convert(const CDM::ActivateOperationState & source);
	static SetContextStateOperationDescriptor convert(const CDM::SetContextStateOperationDescriptor & source);
	static SetContextStateOperationState convert(const CDM::SetContextStateOperationState & source);
	static SetMetricStateOperationDescriptor convert(const CDM::SetMetricStateOperationDescriptor & source);
	static SetMetricStateOperationState convert(const CDM::SetMetricStateOperationState & source);
	static SetComponentStateOperationDescriptor convert(const CDM::SetComponentStateOperationDescriptor & source);
	static SetComponentStateOperationState convert(const CDM::SetComponentStateOperationState & source);
	static SetAlertStateOperationDescriptor convert(const CDM::SetAlertStateOperationDescriptor & source);
	static SetAlertStateOperationState convert(const CDM::SetAlertStateOperationState & source);
	static ClockDescriptor convert(const CDM::ClockDescriptor & source);
	static ClockState convert(const CDM::ClockState & source);
	static BatteryDescriptor convert(const CDM::BatteryDescriptor & source);
	static ChargeStatus convert(const CDM::ChargeStatus & source);
	static BatteryState convert(const CDM::BatteryState & source);
	static SystemContextDescriptor convert(const CDM::SystemContextDescriptor & source);
	static SystemContextState convert(const CDM::SystemContextState & source);
	static BaseDemographics convert(const CDM::BaseDemographics & source);
	static PersonReference convert(const CDM::PersonReference & source);
	static LocationDetail convert(const CDM::LocationDetail & source);
	static PatientContextDescriptor convert(const CDM::PatientContextDescriptor & source);
	static PatientDemographicsCoreData convert(const CDM::PatientDemographicsCoreData & source);
	static NeonatalPatientDemographicsCoreData convert(const CDM::NeonatalPatientDemographicsCoreData & source);
	static PatientContextState convert(const CDM::PatientContextState & source);
	static LocationContextDescriptor convert(const CDM::LocationContextDescriptor & source);
	static LocationContextState convert(const CDM::LocationContextState & source);
	static WorkflowContextDescriptor convert(const CDM::WorkflowContextDescriptor & source);
	static Criticality convert(const CDM::Criticality & source);
	static ClinicalInfo convert(const CDM::ClinicalInfo & source);
	static RelatedMeasurement convert(const CDM::RelatedMeasurement & source);
	static ReferenceRange convert(const CDM::ReferenceRange & source);
	static ImagingProcedure convert(const CDM::ImagingProcedure & source);
	static LocationReference convert(const CDM::LocationReference & source);
	static OrderDetail convert(const CDM::OrderDetail & source);
	static PersonParticipation convert(const CDM::PersonParticipation & source);
	static WorkflowContextState convert(const CDM::WorkflowContextState & source);
	static WorkflowDetail convert(const CDM::WorkflowDetail & source);
	static RequestedOrderDetail convert(const CDM::RequestedOrderDetail & source);
	static PerformedOrderDetail convert(const CDM::PerformedOrderDetail & source);
	static OperatorContextDescriptor convert(const CDM::OperatorContextDescriptor & source);
	static OperatorContextState convert(const CDM::OperatorContextState & source);
	static MeansContextDescriptor convert(const CDM::MeansContextDescriptor & source);
	static MeansContextState convert(const CDM::MeansContextState & source);
	static EnsembleContextDescriptor convert(const CDM::EnsembleContextDescriptor & source);
	static EnsembleContextState convert(const CDM::EnsembleContextState & source);
	static ContainmentTree convert(const CDM::ContainmentTree & source);
	static ContainmentTreeEntry convert(const CDM::ContainmentTreeEntry & source);
};

} /* namespace OSCP */
} /* namespace Data */
} /* namespace OSCLib */

#endif /* DATA_OSCP_MDIB_CONVERTFROMCDM_H_ */
