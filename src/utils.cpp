/******************************************************************************
 *  plate-tectonics, a plate tectonics simulation library
 *  Copyright (C) 2012-2013 Lauri Viitanen
 *  Copyright (C) 2014-2015 Federico Tomassetti, Bret Curtis
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, see http://www.gnu.org/licenses/
 *****************************************************************************/

#include "utils.hpp"
#include <sstream>
#include <iostream>
#include <stdlib.h>

namespace Platec {

std::string to_string(uint32_t value)
{   
    std::stringstream ss;
    ss << value;
    std::string str = ss.str();
    return str;
}

std::string to_string_f(float value)
{   
    std::stringstream ss;
    ss << value;
    std::string str = ss.str();
    return str;
}

}

void p_assert(bool condition, const std::string& message)
{
    if (!condition) {
        std::cerr << "Assertion failed: " << message << std::endl;
        exit(1);
    }
}