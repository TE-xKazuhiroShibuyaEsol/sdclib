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
 *  CodedValue.h
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

#ifndef CODEDVALUE_H_
#define CODEDVALUE_H_

#include "SDCLib/Data/SDC/MDIB/SimpleTypesMapping.h"
#include "SDCLib/Data/SDC/SDC-fwd.h"
#include "DataModel/osdm-fwd.hxx"

namespace SDCLib {
namespace Data {
namespace SDC {

class CodedValue
{
private:
	CodedValue(const CDM::CodedValue & object);
	operator CDM::CodedValue() const;
	friend class ConvertFromCDM;
	friend class ConvertToCDM;
	friend class SDCProvider;
	friend class SDCConsumer;
	friend class MdState;
	friend class MdDescription;
public:
	CodedValue(
		CodeIdentifier code
	);
private:
	CodedValue(){};
public:
	CodedValue(const CodedValue& object);
	virtual ~CodedValue() = default;

    void copyFrom(const CodedValue& object);
    CodedValue & operator=(const CodedValue& object);

    typedef CDM::CodedValue WrappedType;

	CodedValue & setCode(const CodeIdentifier & value);
	CodeIdentifier getCode() const;

	CodedValue & setCodingSystem(const xml_schema::Uri & value);
	xml_schema::Uri getCodingSystem() const;
	bool getCodingSystem(xml_schema::Uri & out) const;
	bool hasCodingSystem() const;

	CodedValue & setCodingSystemVersion(const std::string & value);
	std::string getCodingSystemVersion() const;
	bool getCodingSystemVersion(std::string & out) const;
	bool hasCodingSystemVersion() const;

	CodedValue & setSymbolicCodeName(const SymbolicCodeName & value);
	SymbolicCodeName getSymbolicCodeName() const;
	bool getSymbolicCodeName(SymbolicCodeName & out) const;
	bool hasSymbolicCodeName() const;

	CodedValue & addCodingSystemName(const LocalizedText & value);
	std::vector<LocalizedText> getCodingSystemNameList() const;
	void clearCodingSystemNameList();

	CodedValue & addConceptDescription(const LocalizedText & value);
	std::vector<LocalizedText> getConceptDescriptionList() const;
	void clearConceptDescriptionList();

	CodedValue & addTranslation(const Translation & value);
	std::vector<Translation> getTranslationList() const;
	void clearTranslationList();

private:
	std::shared_ptr<CDM::CodedValue> data = nullptr;
};

} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */
#endif /* CODEDVALUE_H_ */
