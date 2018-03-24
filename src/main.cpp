/* 
 * main.cpp - Contains main function for application
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

#include <project-abbr/factorial.hpp>
#include <project-abbr/hello_world.hpp>
#include <iostream>

int main()
{
    HelloWorld helloWorld;

    std::cout << helloWorld.hello() << ", " << helloWorld.world() << "!\n";
    std::cout << "Random number = " << helloWorld.generateRandomNumber() << "\n";
    std::cout << "Factorial(5) = " << factorial(5) << "\n";
}
