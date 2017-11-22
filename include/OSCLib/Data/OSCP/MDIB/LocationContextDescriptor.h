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
 *  LocationContextDescriptor.h
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

#ifndef LOCATIONCONTEXTDESCRIPTOR_H_
#define LOCATIONCONTEXTDESCRIPTOR_H_

#include "OSCLib/Data/OSCP/MDIB/SimpleTypesMapping.h"
#include "OSCLib/Data/OSCP/OSCP-fwd.h"
#include "osdm-fwd.hxx"

namespace OSCLib {
namespace Data {
namespace OSCP {

class LocationContextDescriptor {
private:
	LocationContextDescriptor(const CDM::LocationContextDescriptor & object);
	operator CDM::LocationContextDescriptor() const;
	friend class ConvertFromCDM;
	friend class ConvertToCDM;
	friend class OSCPProvider;
	friend class OSCPConsumer;
public:
	LocationContextDescriptor(
		Handle handle
	); 
private:
	LocationContextDescriptor(){};
public:
	LocationContextDescriptor(const LocationContextDescriptor & object);
	virtual ~LocationContextDescriptor();
    
    void copyFrom(const LocationContextDescriptor & object);
    LocationContextDescriptor & operator=(const LocationContextDescriptor & object);
    
    typedef CDM::LocationContextDescriptor WrappedType;
    typedef LocationContextState StateType;

	LocationContextDescriptor & setType(const CodedValue & value);
	CodedValue getType() const;
	bool getType(CodedValue & out) const;
	bool hasType() const;

	LocationContextDescriptor & setHandle(const Handle & value);
	Handle getHandle() const;

	LocationContextDescriptor & setDescriptorVersion(const VersionCounter & value);
	VersionCounter getDescriptorVersion() const;
	bool getDescriptorVersion(VersionCounter & out) const;
	bool hasDescriptorVersion() const;

	LocationContextDescriptor & setSafetyClassification(const SafetyClassification & value);
	SafetyClassification getSafetyClassification() const;
	bool getSafetyClassification(SafetyClassification & out) const;
	bool hasSafetyClassification() const;

private:
	std::shared_ptr<CDM::LocationContextDescriptor> data;
};

} /* namespace OSCP */
} /* namespace Data */
} /* namespace OSCLib */
#endif /* LOCATIONCONTEXTDESCRIPTOR_H_ */
