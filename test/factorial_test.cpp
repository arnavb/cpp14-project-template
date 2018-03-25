/* 
 * factorial_test.cpp - Contains unit tests for function factorial
 * Copyright 2018 Arnav Borborah
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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
