/* 
 * main.cpp - Contains main function for application
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
        std::cout << "Copyright (C) 2018  Arnav Borborah\n";
        std::cout << "This program comes with ABSOLUTELY NO WARRANTY; for details see LICENSE.\n";
        std::cout << "This is free software, and you are welcome to redistribute it\n";
        std::cout << "under certain conditions; see LICENSE for details.\n\n";   
    }
    else
    {
        std::cout << helloWorld.hello() << ", " << helloWorld.world() << "!\n";
        std::cout << "Random number = " << helloWorld.generateRandomNumber() << "\n";
        std::cout << "Factorial(5) = " << factorial(5) << "\n";
    }
}
