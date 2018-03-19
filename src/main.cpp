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
