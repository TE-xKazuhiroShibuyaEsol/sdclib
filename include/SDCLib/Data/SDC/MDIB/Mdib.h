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
 *  Mdib.h
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

#ifndef MDIB_H_
#define MDIB_H_

#include "SDCLib/Data/SDC/MDIB/SimpleTypesMapping.h"
#include "SDCLib/Data/SDC/SDC-fwd.h"
#include "DataModel/osdm-fwd.hxx"

namespace SDCLib {
namespace Data {
namespace SDC {

class Mdib
{
private:
	Mdib(const CDM::Mdib & object);
	operator CDM::Mdib() const;
	friend class ConvertFromCDM;
	friend class ConvertToCDM;
	friend class SDCProvider;
	friend class SDCConsumer;
	friend class MdState;
	friend class MdDescription;
public:
	Mdib(
	);
	Mdib(const Mdib& object);
	virtual ~Mdib() = default;

    void copyFrom(const Mdib& object);
    Mdib & operator=(const Mdib& object);

    typedef CDM::Mdib WrappedType;

	Mdib & setMdDescription(const MdDescription & value);
	MdDescription getMdDescription() const;
	bool getMdDescription(MdDescription & out) const;
	bool hasMdDescription() const;

	Mdib & setMdState(const MdState & value);
	MdState getMdState() const;
	bool getMdState(MdState & out) const;
	bool hasMdState() const;

private:
	std::shared_ptr<CDM::Mdib> data = nullptr;
};

} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */
#endif /* MDIB_H_ */
