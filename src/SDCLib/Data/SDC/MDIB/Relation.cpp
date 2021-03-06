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
 *  Relation.cpp
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

#include "SDCLib/Data/SDC/MDIB/Relation.h"
#include "SDCLib/Data/SDC/MDIB/ConvertToCDM.h"
#include "SDCLib/Data/SDC/MDIB/ConvertFromCDM.h"
#include "SDCLib/Data/SDC/MDIB/Defaults.h"

#include "DataModel/osdm.hxx"

#include "SDCLib/Data/SDC/MDIB/CodedValue.h"
#include "SDCLib/Data/SDC/MDIB/InstanceIdentifier.h"

namespace SDCLib {
namespace Data {
namespace SDC {


Relation::Relation(
		Kind kind
		,
		EntryRef entries
) : data(Defaults::RelationInit(
		kind
		,
		entries
)) {}

Relation::operator CDM::Relation() const {
	return *data;
}

Relation::Relation(const CDM::Relation & object)
: data(new CDM::Relation(object))
{ }

Relation::Relation(const Relation & object)
: data(new CDM::Relation(*object.data))
{ }

void Relation::copyFrom(const Relation & object) {
	data = std::make_shared<CDM::Relation>(*object.data);
}

Relation & Relation:: operator=(const Relation & object) {
	copyFrom(object);
	return *this;
}


Relation & Relation::setCode(const CodedValue & value) {
	data->setCode(ConvertToCDM::convert(value));
	return *this;
}

bool Relation::getCode(CodedValue & out) const {
	if (data->getCode().present()) {
		out = ConvertFromCDM::convert(data->getCode().get());
		return true;
	}
	return false;
}

CodedValue Relation::getCode() const {
	return ConvertFromCDM::convert(data->getCode().get());
}

bool Relation::hasCode() const {
	return data->getCode().present();
}

Relation & Relation::setIdentification(const InstanceIdentifier & value) {
	data->setIdentification(ConvertToCDM::convert(value));
	return *this;
}

bool Relation::getIdentification(InstanceIdentifier & out) const {
	if (data->getIdentification().present()) {
		out = ConvertFromCDM::convert(data->getIdentification().get());
		return true;
	}
	return false;
}

InstanceIdentifier Relation::getIdentification() const {
	return ConvertFromCDM::convert(data->getIdentification().get());
}

bool Relation::hasIdentification() const {
	return data->getIdentification().present();
}

Relation & Relation::setKind(const Kind & value) {
	data->setKind(ConvertToCDM::convert(value));
	return *this;
}


Kind Relation::getKind() const {
	return ConvertFromCDM::convert(data->getKind());
}

Relation & Relation::setEntries(const EntryRef & value) {
	data->setEntries(ConvertToCDM::convert1(value));
	return *this;
}


EntryRef Relation::getEntries() const {
	return ConvertFromCDM::convert(data->getEntries());
}


} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */

