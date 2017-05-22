/**
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  *
  */

/*
 *  EnumStringMetricState.cpp
 *
 *  @Copyright (C) 2015, SurgiTAIX AG
 *  Author: besting, roehser
 */
 
/**
 * THIS FILE IS GENERATED AUTOMATICALLY! DO NOT MODIFY!
 *
 * YOUR CHANGES WILL BE OVERWRITTEN!
 * 
 * USE THE DEFINITION FILES IN THE FOLDER "codegenerator" INSTEAD!
 */

#include "OSCLib/Data/OSCP/MDIB/EnumStringMetricState.h"
#include "OSCLib/Data/OSCP/MDIB/custom/ConvertToCDM.h"
#include "OSCLib/Data/OSCP/MDIB/custom/ConvertFromCDM.h"
#include "OSCLib/Data/OSCP/MDIB/custom/Defaults.h"

#include "osdm.hxx"

#include "OSCLib/Data/OSCP/MDIB/StringMetricValue.h"
#include "OSCLib/Data/OSCP/MDIB/Duration.h"
#include "OSCLib/Data/OSCP/MDIB/ReferencedVersion.h"
#include "OSCLib/Data/OSCP/MDIB/VersionCounter.h"

namespace OSCLib {
namespace Data {
namespace OSCP {

EnumStringMetricState::EnumStringMetricState() : data(Defaults::EnumStringMetricState()) {
}

EnumStringMetricState::operator CDM::EnumStringMetricState() const {
	return *data;
}

EnumStringMetricState::EnumStringMetricState(const CDM::EnumStringMetricState & object) : data(new CDM::EnumStringMetricState(object)) {

}

EnumStringMetricState::EnumStringMetricState(const EnumStringMetricState & object) : data(new CDM::EnumStringMetricState(*object.data)) {

}

EnumStringMetricState::~EnumStringMetricState() {

}

void EnumStringMetricState::copyFrom(const EnumStringMetricState & object) {
	*data = *object.data;
}

EnumStringMetricState & EnumStringMetricState:: operator=(const EnumStringMetricState & object) {
	copyFrom(object);
	return *this;
}


EnumStringMetricState & EnumStringMetricState::setDescriptorVersion(const ReferencedVersion & value) {
	data->DescriptorVersion(ConvertToCDM::convert(value));
	return *this;
}

bool EnumStringMetricState::getDescriptorVersion(ReferencedVersion & out) const {
	if (data->DescriptorVersion().present()) {
		out = ConvertFromCDM::convert(data->DescriptorVersion().get());
		return true;
	}
	return false;
}

ReferencedVersion EnumStringMetricState::getDescriptorVersion() const {
	return ConvertFromCDM::convert(data->DescriptorVersion().get());
}
	
bool EnumStringMetricState::hasDescriptorVersion() const {
	return data->DescriptorVersion().present();
}
	
EnumStringMetricState & EnumStringMetricState::setDescriptorHandle(const std::string & value) {
	data->DescriptorHandle(ConvertToCDM::convert(value));
	return *this;
}


std::string EnumStringMetricState::getDescriptorHandle() const {
	return ConvertFromCDM::convert(data->DescriptorHandle());
}
	
EnumStringMetricState & EnumStringMetricState::setStateVersion(const VersionCounter & value) {
	data->StateVersion(ConvertToCDM::convert(value));
	return *this;
}

bool EnumStringMetricState::getStateVersion(VersionCounter & out) const {
	if (data->StateVersion().present()) {
		out = ConvertFromCDM::convert(data->StateVersion().get());
		return true;
	}
	return false;
}

VersionCounter EnumStringMetricState::getStateVersion() const {
	return ConvertFromCDM::convert(data->StateVersion().get());
}
	
bool EnumStringMetricState::hasStateVersion() const {
	return data->StateVersion().present();
}
	
EnumStringMetricState & EnumStringMetricState::setActivationState(const ComponentActivation & value) {
	data->ActivationState(ConvertToCDM::convert(value));
	return *this;
}


ComponentActivation EnumStringMetricState::getActivationState() const {
	return ConvertFromCDM::convert(data->ActivationState());
}
	
EnumStringMetricState & EnumStringMetricState::setLifeTimePeriod(const Duration & value) {
	data->LifeTimePeriod(ConvertToCDM::convert(value));
	return *this;
}

bool EnumStringMetricState::getLifeTimePeriod(Duration & out) const {
	if (data->LifeTimePeriod().present()) {
		out = ConvertFromCDM::convert(data->LifeTimePeriod().get());
		return true;
	}
	return false;
}

Duration EnumStringMetricState::getLifeTimePeriod() const {
	return ConvertFromCDM::convert(data->LifeTimePeriod().get());
}
	
bool EnumStringMetricState::hasLifeTimePeriod() const {
	return data->LifeTimePeriod().present();
}
	
EnumStringMetricState & EnumStringMetricState::setActiveDeterminationPeriod(const Duration & value) {
	data->ActiveDeterminationPeriod(ConvertToCDM::convert(value));
	return *this;
}

bool EnumStringMetricState::getActiveDeterminationPeriod(Duration & out) const {
	if (data->ActiveDeterminationPeriod().present()) {
		out = ConvertFromCDM::convert(data->ActiveDeterminationPeriod().get());
		return true;
	}
	return false;
}

Duration EnumStringMetricState::getActiveDeterminationPeriod() const {
	return ConvertFromCDM::convert(data->ActiveDeterminationPeriod().get());
}
	
bool EnumStringMetricState::hasActiveDeterminationPeriod() const {
	return data->ActiveDeterminationPeriod().present();
}
	
EnumStringMetricState & EnumStringMetricState::setObservedValue(const StringMetricValue & value) {
	data->ObservedValue(ConvertToCDM::convert(value));
	return *this;
}

bool EnumStringMetricState::getObservedValue(StringMetricValue & out) const {
	if (data->ObservedValue().present()) {
		out = ConvertFromCDM::convert(data->ObservedValue().get());
		return true;
	}
	return false;
}

StringMetricValue EnumStringMetricState::getObservedValue() const {
	return ConvertFromCDM::convert(data->ObservedValue().get());
}
	
bool EnumStringMetricState::hasObservedValue() const {
	return data->ObservedValue().present();
}
	

} /* namespace OSCP */
} /* namespace Data */
} /* namespace OSCLib */

