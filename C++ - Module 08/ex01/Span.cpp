/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:55:35 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/24 14:51:11 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _size(0)
{
    this->_arr = new int[n];
}

Span::Span(Span const & src)
{
    *this = src;
}

Span::~Span()
{
    delete [] this->_arr;
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
        this->_arr[this->_size] = n;
        this->_size++;
    }
    else
        throw std::exception();
}

int     Span::shortestSpan()
{
    int     min = 2147483647;
    int     tmp;

    if (this->_size < 2)
        throw std::exception();
    for (unsigned int i = 0; i < this->_size; i++)
    {
        for (unsigned int j = i + 1; j < this->_size; j++)
        {
            tmp = this->_arr[i] - this->_arr[j];
            if (tmp < 0)
                tmp *= -1;
            if (tmp < min)
                min = tmp;
        }
    }
    return (min);
}

int     Span::longestSpan()
{
    int     max = 0;
    int     tmp;

    if (this->_size < 2)
        throw std::exception();
    for (unsigned int i = 0; i < this->_size; i++)
    {
        for (unsigned int j = i + 1; j < this->_size; j++)
        {
            tmp = this->_arr[i] - this->_arr[j];
            if (tmp < 0)
                tmp *= -1;
            if (tmp > max)
                max = tmp;
        }
    }
    return (max);
}

