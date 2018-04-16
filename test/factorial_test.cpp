#include <project-abbr/factorial.hpp>

#include "doctest.h"

TEST_CASE("function factorial")
{
    SUBCASE("normal arguments")
    {
        CHECK(factorial(2) == 2);
        CHECK(factorial(3) == 6);
        CHECK(factorial(4) == 24);
        CHECK(factorial(5) == 120);
    }
    
    SUBCASE("somewhat large numbers")
    {
        CHECK(factorial(10) == 3628800);
        CHECK(factorial(12) == 479001600);
    }
    
    SUBCASE("negative numbers")
    {
        CHECK(factorial(-1) == 1);
        CHECK(factorial(-2) == 1);
    }
    
    SUBCASE("zero and one")
    {
        CHECK(factorial(0) == 1);
        CHECK(factorial(1) == 1);
    }
}
