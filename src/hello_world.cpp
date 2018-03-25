/* 
 * HelloWorld.cpp - Contains implementation of class HelloWorld
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

#include <project-abbr/hello_world.hpp>

HelloWorld::HelloWorld() :
    hello_{ "Hello" },
    world_{ "World" }
{
}

const std::string& HelloWorld::hello() const
{
    return hello_;
}

const std::string& HelloWorld::world() const
{
    return world_;
}

int HelloWorld::generateRandomNumber() const
{
    // Completely random, no bias
    return 4'000; // <-- Also uses C++14 digit separators
}
