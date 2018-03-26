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
