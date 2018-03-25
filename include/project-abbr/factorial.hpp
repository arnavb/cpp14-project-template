/* 
 * factorial.hpp - Contains declaration of function factorial
 * Copyright 2018 Arnav Borborah
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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
