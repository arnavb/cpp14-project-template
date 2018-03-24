/* 
 * HelloWorld.hpp - Contains declaration of class HelloWorld
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
 * This file contains the declaration for class HelloWorld.
 */

#pragma once
#ifndef HELLO_WORLD_HPP_
#define HELLO_WORLD_HPP_

#include <string>

/**
 * A useful class that contains utilities 
 * helpful to "Hello, World!" programs.
 * 
 * ### Example
 * \code
 * HelloWorld helloWorld;
 * 
 * std::string helloWorld = helloWorld.hello() + ", " + helloWorld.world() + "!"; // helloWorld contains "Hello, World!"
 * int randomNumber = helloWorld.generateRandomNumber(); // randomNumber contains 4000
 * \endcode
 */
class HelloWorld
{
public:
    /**
     * \brief Constructor for HelloWorld class 
     * 
     * Initializes class members hello_ and world_
     * with their respective values.
     */
    HelloWorld();
    
    /**
     * \brief Getter for member variable hello_ 
     * 
     * \return The string "Hello"
     */
    std::string hello() const;
    
    /**
     * \brief Getter for member variable world_ 
     * 
     * \return The string "World"
     */
    std::string world() const;
    
    /**
     * \brief A random number generator
     * 
     * \return The random number 4000
     */
    int generateRandomNumber() const;
    
private:
    std::string hello_;
    std::string world_;
    
};

#endif // !HELLO_WORLD_HPP_
