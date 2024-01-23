#pragma once

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<float> stock;
    public:
        RPN(std::string line);
        ~RPN();
};
