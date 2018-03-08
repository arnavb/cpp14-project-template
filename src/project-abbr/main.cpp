#include <project-abbr/Factorial.hpp>
#include <project-abbr/HelloWorld.hpp>
#include <iostream>

int main()
{
    HelloWorld helloWorld;
    
    std::cout << helloWorld.hello() << ", " << helloWorld.world() << "!\n";
    std::cout << "Random number = " << helloWorld.generateRandomNumber() << "\n";
    std::cout << "Factorial(5) = " << factorial(5) << "\n";
}
