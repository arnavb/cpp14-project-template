#pragma once
#ifndef HELLO_WORLD_HPP_
#define HELLO_WORLD_HPP_

#include <string>

class HelloWorld
{
public:
    HelloWorld();
    
    inline std::string hello() { return hello_; }
    inline std::string world() { return world_; }
    
    int generateRandomNumber(); // Not inline for testing purposes
private:
    std::string hello_;
    std::string world_;
};

#endif // !HELLO_WORLD_HPP_
