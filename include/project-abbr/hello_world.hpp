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
    
    
    /**
     * \brief A function defined and 
     * implemented purely in the header file
     * 
     * \param number The original integer
     * 
     * \return number divided by 2 using integer division 
     * if number is even; else return 3
     */
     int headerFunction(int number)
     {
         if (number % 2 == 0)
         {
             return number / 2;
         }
         return 3;
     }
private:
    std::string hello_;
    std::string world_;
    
};

#endif // !HELLO_WORLD_HPP_
