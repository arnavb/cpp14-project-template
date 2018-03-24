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

#include <project-abbr/config.hpp>
#include <project-abbr/factorial.hpp>
#include <project-abbr/hello_world.hpp>

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    HelloWorld helloWorld;
    
    if (argc == 2 && std::string{ argv[1] } == "--version")
    {
        std::cout << "Project Name version " << VERSION << "\n";
        std::cout << "Copyright (C) 2018 Arnav Borborah\n";
        std::cout << "This program comes with ABSOLUTELY NO WARRANTY; for details see LICENSE.\n";
        std::cout << "This is free software, and you are welcome to redistribute it\n";
        std::cout << "under certain conditions; see LICENSE for details.\n\n";   
    }
    
    std::cout << helloWorld.hello() << ", " << helloWorld.world() << "!\n";
    std::cout << "Random number = " << helloWorld.generateRandomNumber() << "\n";
    std::cout << "Factorial(5) = " << factorial(5) << "\n";
}
