#include <project-abbr/hello_world.hpp>

#include "doctest.h"

#include <string>

TEST_CASE("class HelloWorld")
{
    HelloWorld helloWorld;
    
    SUBCASE("function hello()")
    {
        //CHECK(helloWorld.hello() == "Hello");
    }
    SUBCASE("function world()")
    {
        //CHECK(helloWorld.world() == "World");
    }
    SUBCASE("function generateRandomNumber()")
    {
        CHECK(helloWorld.generateRandomNumber() == 4000);
    }
}
