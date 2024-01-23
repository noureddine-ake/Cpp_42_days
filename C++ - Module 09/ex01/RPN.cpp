#include "RPN.hpp"

#include <iomanip>
RPN::RPN(std::string line)
{
    std::string::iterator it = line.begin();
    while (*it != '\0')
    {
        if (std::isdigit(*it) == false && *it != '+' && *it != '-' && *it != '*' && *it != '/' && *it != ' ')
            throw std::exception();
        if (std::isdigit(*it) == true)
        {
            if (*(it + 1) != ' ' && *(it + 1) != '\0')
                throw std::exception();
            stock.push(*it - '0');
        }
        else if (*it != ' ')
        {
            if (stock.size() < 2)
                throw std::exception();
            int b = stock.top();
            stock.pop();
            int a = stock.top();
            stock.pop();
            if (*it == '+')
                stock.push(a + b);
            else if (*it == '-')
                stock.push(a - b);
            else if (*it == '*')
                stock.push(a * b);
            else if (*it == '/')
            {
                if (b == 0)
                    throw std::exception();
                stock.push(a / static_cast<float>(b));
            }
            if (*(it + 1) != ' ' && *(it + 1) != '\0')
                throw std::exception();
        }
        it++;
    }
    if (stock.size() != 1)
        throw std::exception();
    std::cout << stock.top() << std::endl;
}

RPN::~RPN()
{
}
