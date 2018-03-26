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
        std::cout << "Copyright information here\n";
        std::cout << "More copyright details.\n\n";
    }
    else
    {
        std::cout << helloWorld.hello() << ", " << helloWorld.world() << "!\n";
        std::cout << "Random number = " << helloWorld.generateRandomNumber() << "\n";
        std::cout << "Factorial(5) = " << factorial(5) << "\n";
    }
}
