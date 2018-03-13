#pragma once
#ifndef HELLO_WORLD_HPP_
#define HELLO_WORLD_HPP_

#include <string>

class HelloWorld
{
public:
    HelloWorld();
    
    std::string hello() const;
    std::string world() const;
    
    int generateRandomNumber() const;
private:
    std::string hello_;
    std::string world_;
};

#endif // !HELLO_WORLD_HPP_
