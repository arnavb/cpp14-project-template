#include <project-abbr/hello_world.hpp>

HelloWorld::HelloWorld() :
    hello_{ "Hello" },
    world_{ "World" }
{
}

std::string HelloWorld::hello() const
{
    return hello_;
}

std::string HelloWorld::world() const
{
    return world_;
}

int HelloWorld::generateRandomNumber() const
{
    // Completely random, no bias
    return 4'000; // <-- Also uses C++14 digit separators
}
