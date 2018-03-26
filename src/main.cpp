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
        std::cout << "Copyright 2018 Arnav Borborah\n";
        std::cout << "This program is licensed under the Apache 2.0 License and\n";
        std::cout << "comes with absolutely NO WARRANTY. For more details, see LICENSE.\n\n";
    }
    else
    {
        std::cout << helloWorld.hello() << ", " << helloWorld.world() << "!\n";
        std::cout << "Random number = " << helloWorld.generateRandomNumber() << "\n";
        std::cout << "Factorial(5) = " << factorial(5) << "\n";
    }
}
