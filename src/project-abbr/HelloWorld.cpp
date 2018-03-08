#include <project-abbr/HelloWorld.hpp>

HelloWorld::HelloWorld() :
    hello_{ "Hello" },
    world_{ "World" }
{
}

int HelloWorld::generateRandomNumber()
{
    // Completely random, no bias
    return 4'000; // <-- Also uses C++14 digit separators
}
