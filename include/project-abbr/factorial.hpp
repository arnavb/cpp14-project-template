/* 
 * factorial.hpp - Contains declaration of function factorial
 * Copyright (C) 2018  Arnav Borborah
 *
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
 */

/**
 * \file
 * \author Arnav Borborah <arnavborborah11@gmail.com>
 * 
 * This file contains the declaration for function factorial.
 */

#pragma once
#ifndef FACTORIAL_HPP_
#define FACTORIAL_HPP_

/**
 * \brief Function that returns the factorial of an integer
 * 
 * The factorial function returns the product of all 
 * positive integers less or equal to an integer number. 
 * If number is less than 0, then the function returns 1.
 * 
 * \param number The integer to get the factorial of
 * 
 * \return The factorial of number
 * 
 * ### Example
 * \code
 * int fact10 = factorial(10); // fact10 contains 3628800
 * int factNeg10 = factorial(-10); // factNeg10 contains 1
 * \endcode
 */
int factorial(int number);

#endif // !FACTORIAL_HPP_
