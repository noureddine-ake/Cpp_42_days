/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:55:35 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 02:51:08 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _size(0)
{
}

Span::Span(Span const & src)
{
    *this = src;
}

Span::~Span()
{
}

Span & Span::operator=(Span const & src)
{
    if (this != &src)
    {
        this->_n = src._n;
        this->_size = src._size;
        this->_arr = src._arr;
    }
    return (*this);
}

void    Span::addNumber(int n)
{
    if (this->_size < this->_n)
    {
        this->_arr.push_back(n);
        this->_size++;
        std::sort(this->_arr.begin(), this->_arr.end());
    }
    else
        throw std::exception();
}

int     Span::shortestSpan()
{
    int     min = INT_MAX;

    if (this->_size < 2)
        throw std::exception();
    std::vector<int>::iterator it = this->_arr.begin();
    std::vector<int>::iterator ite = this->_arr.end();
    for (; it != ite - 1; it++)
    {
        if (abs(*(it + 1) - *it) < min)
            min = abs(*(it + 1) - *it);
    }
    return (min);
}

int     Span::longestSpan()
{
    if (this->_size < 2)
        throw std::exception();
    return (abs(*(_arr.end() - 1) - *(_arr.begin())));
}

void    Span::fillArr()
{
    for (unsigned int i = 0; i < this->_n && this->_size < this->_n; i++)
    {
        this->_arr.push_back(rand() % _n);
        this->_size++;
    }
    std::sort(this->_arr.begin(), this->_arr.end());
}

void    Span::printArr()
{
    std::cout << "------Array-----" << std::endl;
    std::cout << "Size: " << this->_arr.size() << std::endl;
    std::cout << ": " << this->_n << std::endl;
    for (std::vector<int>::iterator it = _arr.begin(); it < this->_arr.end(); it++)
        std::cout << *it << std::endl;
    std::cout << "----------------" << std::endl;
}
