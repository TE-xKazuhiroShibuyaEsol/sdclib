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
 *  CalibrationDocumentation.h
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

#ifndef CALIBRATIONDOCUMENTATION_H_
#define CALIBRATIONDOCUMENTATION_H_

#include "SDCLib/Data/SDC/MDIB/SimpleTypesMapping.h"
#include "SDCLib/Data/SDC/SDC-fwd.h"
#include "DataModel/osdm-fwd.hxx"

namespace SDCLib {
namespace Data {
namespace SDC {

class CalibrationDocumentation
{
private:
	CalibrationDocumentation(const CDM::CalibrationDocumentation & object);
	operator CDM::CalibrationDocumentation() const;
	friend class ConvertFromCDM;
	friend class ConvertToCDM;
	friend class SDCProvider;
	friend class SDCConsumer;
	friend class MdState;
	friend class MdDescription;
public:
	CalibrationDocumentation(
	);
	CalibrationDocumentation(const CalibrationDocumentation& object);
	virtual ~CalibrationDocumentation() = default;

    void copyFrom(const CalibrationDocumentation& object);
    CalibrationDocumentation & operator=(const CalibrationDocumentation& object);

    typedef CDM::CalibrationDocumentation WrappedType;

	CalibrationDocumentation & addDocumentation(const LocalizedText & value);
	std::vector<LocalizedText> getDocumentationList() const;
	void clearDocumentationList();

	CalibrationDocumentation & addCalibrationResult(const CalibrationResult & value);
	std::vector<CalibrationResult> getCalibrationResultList() const;
	void clearCalibrationResultList();

private:
	std::shared_ptr<CDM::CalibrationDocumentation> data = nullptr;
};

} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */
#endif /* CALIBRATIONDOCUMENTATION_H_ */
