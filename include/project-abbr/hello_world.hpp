/* 
 * HelloWorld.hpp - Contains declaration of class HelloWorld
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
    const std::string& hello() const;
    
    /**
     * \brief Getter for member variable world_ 
     * 
     * \return The string "World"
     */
    const std::string& world() const;
    
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
