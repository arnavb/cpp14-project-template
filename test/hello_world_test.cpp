/* 
 * factorial_test.cpp - Contains unit tests for class HelloWorld
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

#include "catch.hpp"
#include <project-abbr/hello_world.hpp>

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
