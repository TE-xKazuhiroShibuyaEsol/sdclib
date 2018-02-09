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
 *  SetAlertStateOperationState.h
 *
 *  @Copyright (C) 2015, SurgiTAIX AG
 *  Author: besting, buerger, roehser
 */
 
/**
 * THIS FILE IS GENERATED AUTOMATICALLY! DO NOT MODIFY!
 *
 * YOUR CHANGES WILL BE OVERWRITTEN!
 * 
 * USE THE DEFINITION FILES IN THE FOLDER "codegenerator" INSTEAD!
 */

#ifndef SETALERTSTATEOPERATIONSTATE_H_
#define SETALERTSTATEOPERATIONSTATE_H_

#include "OSCLib/Data/OSCP/MDIB/SimpleTypesMapping.h"
#include "OSCLib/Data/OSCP/SDC-fwd.h"
#include "osdm-fwd.hxx"

namespace OSCLib {
namespace Data {
namespace SDC {

class SetAlertStateOperationState {
private:
	SetAlertStateOperationState(const CDM::SetAlertStateOperationState & object);
	operator CDM::SetAlertStateOperationState() const;
	friend class ConvertFromCDM;
	friend class ConvertToCDM;
	friend class SDCProvider;
	friend class SDCConsumer;
	friend class MdState;
	friend class MdDescription;
public:
	SetAlertStateOperationState(
		HandleRef descriptorhandle
		, 
		OperatingMode operatingmode
	); 
private:
	SetAlertStateOperationState(){};
public:
	SetAlertStateOperationState(const SetAlertStateOperationState & object);
	virtual ~SetAlertStateOperationState();
    
    void copyFrom(const SetAlertStateOperationState & object);
    SetAlertStateOperationState & operator=(const SetAlertStateOperationState & object);
    
    typedef CDM::SetAlertStateOperationState WrappedType;

	SetAlertStateOperationState & setStateVersion(const VersionCounter & value);
	VersionCounter getStateVersion() const;
	bool getStateVersion(VersionCounter & out) const;
	bool hasStateVersion() const;

	SetAlertStateOperationState & setDescriptorHandle(const HandleRef & value);
	HandleRef getDescriptorHandle() const;

	SetAlertStateOperationState & setDescriptorVersion(const ReferencedVersion & value);
	ReferencedVersion getDescriptorVersion() const;
	bool getDescriptorVersion(ReferencedVersion & out) const;
	bool hasDescriptorVersion() const;

	SetAlertStateOperationState & setOperatingMode(const OperatingMode & value);
	OperatingMode getOperatingMode() const;

private:
	std::shared_ptr<CDM::SetAlertStateOperationState> data;
};

} /* namespace SDC */
} /* namespace Data */
} /* namespace OSCLib */
#endif /* SETALERTSTATEOPERATIONSTATE_H_ */
