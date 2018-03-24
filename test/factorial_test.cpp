/* 
 * factorial_test.cpp - Contains unit tests for function factorial
 * Copyright (C) 2018  Arnav Borborah
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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
