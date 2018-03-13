#include "catch.hpp"
#include <project-abbr/hello_world.hpp>

TEST_CASE("class HelloWorld")
{
    HelloWorld helloWorld;
    
    SECTION("hello() returns 'Hello'")
    {
        REQUIRE(helloWorld.hello() == "Hello");
    }
    SECTION("world() returns 'World'")
    {
        REQUIRE(helloWorld.world() == "World");
    }
    SECTION("generateRandomNumber() returns 4,000")
    {
        REQUIRE(helloWorld.generateRandomNumber() == 4000);
    }
}
