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

/**
 *  @file config.h.in
 *  @project SDCLib
 *  @date 28.08.2018
 *  @author baumeister
 *  @copyright (c) SurgiTAIX AG
 *
 */
#ifndef SDCLIBRARY_SDCLIB_CONFIG_H
#define SDCLIBRARY_SDCLIB_CONFIG_H

#include <string>

namespace SDCLib
{
    namespace Config
    {
        // Will be replaced by CMake
        const int SDCLIBRARY_VERSION_FIRST = 3;
        const int SDCLIBRARY_VERSION_MIDDLE = 0;
        const int SDCLIBRARY_VERSION_LAST = 3;
        const std::string CURRENT_LIB_VERSION("3.0.3");

        // Specify these values in your firewall settings to pass the allowed port range (running tests and examples!)
        const unsigned int SDC_ALLOWED_PORT_START = 14000;
        const unsigned int SDC_ALLOWED_PORT_RANGE = 1000;
        const unsigned int SDC_ALLOWED_PORT_END = SDC_ALLOWED_PORT_START + SDC_ALLOWED_PORT_RANGE;
    }
}


#endif