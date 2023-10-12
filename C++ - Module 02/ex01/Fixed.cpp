/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:20:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/07 00:38:32 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fp_val = 0;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fp_val = value << this->fract_bits;
}

float Fixed::toFloat(void) const
{
    return ((float)this->fp_val / (float)(1 << this->fract_bits));
}

int Fixed::toInt(void) const
{
    return (this->fp_val >> this->fract_bits);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fp_val = roundf(value * (1 << this->fract_bits));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fp_val = other.fp_val;
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp_val);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fp_val = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}