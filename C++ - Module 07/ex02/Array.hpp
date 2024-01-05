/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:35:21 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/23 04:22:26 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
    private:
        T       *_array;
        size_t  _size;
    public:
        Array(void);
        Array(unsigned int n);
        Array(Array const &src);
        ~Array(void);
        Array   &operator=(Array const &rhs);
        T       &operator[](size_t const &index) const;
        size_t  size(void) const;
};

template <typename T>

Array<T>::Array(void) : _array(NULL), _size(0)
{
}

template <typename T>

Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T>

Array<T>::Array(Array const &src)
{
    *this = src;
}

template <typename T>

Array<T>::~Array(void)
{
    delete [] this->_array;
}

template <typename T>

Array<T>    &Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        delete [] this->_array;
        this->_array = new T[rhs._size];
        this->_size = rhs._size;
        for (size_t i = 0; i < this->_size; i++)
            this->_array[i] = rhs._array[i];
    }
    return (*this);
}

template <typename T>

T   &Array<T>::operator[](size_t const &index) const
{
    if (index >= this->_size)
        throw std::exception();
    return (this->_array[index]);
}

template <typename T>

size_t  Array<T>::size(void) const
{
    return (this->_size);
}

template <typename T>

std::ostream    &operator<<(std::ostream &out, Array<T> const &array)
{
    out << "[";
    for (size_t i = 0; i < array.size(); i++)
    {
        out << array[i];
        if (i < array.size() - 1)
            out << ", ";
    }
    out << "]";
    return (out);
}

#endif