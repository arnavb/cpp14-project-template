#include <project-abbr/factorial.hpp>
#include "catch.hpp"

TEST_CASE("function factorial")
{
    SECTION("normal arguments")
    {
        REQUIRE(factorial(2) == 2);
        REQUIRE(factorial(3) == 6);
        REQUIRE(factorial(4) == 24);
        REQUIRE(factorial(5) == 120);
    }
    
    SECTION("somewhat large numbers")
    {
        REQUIRE(factorial(10) == 3628800);
        REQUIRE(factorial(12) == 479001600);
    }
    
    SECTION("negative numbers")
    {
        REQUIRE(factorial(-1) == 1);
        REQUIRE(factorial(-2) == 1);
    }
    
    SECTION("zero and one")
    {
        REQUIRE(factorial(0) == 1);
        REQUIRE(factorial(1) == 1);
    }
}
