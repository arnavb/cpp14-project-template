#include <project-abbr/hello_world.hpp>

#include "catch.hpp"

TEST_CASE("class HelloWorld")
{
    HelloWorld helloWorld;
    
    SECTION("function hello()")
    {
        REQUIRE(helloWorld.hello() == "Hello");
    }
    SECTION("function world()")
    {
        REQUIRE(helloWorld.world() == "World");
    }
    SECTION("function generateRandomNumber()")
    {
        REQUIRE(helloWorld.generateRandomNumber() == 4000);
    }
}
