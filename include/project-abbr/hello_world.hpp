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
    
    int headerFunction(int x) const
    {
        if (x == 3)
        {
            return 4;
        }
        else
        {
            return 5;
        }
    }
private:
    std::string hello_;
    std::string world_;
};

#endif // !HELLO_WORLD_HPP_
