/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:20:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/24 21:55:10 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->fp_val = 0;
}

Fixed::Fixed(const Fixed& src)
{
    *this = src;
}

Fixed::Fixed(const int value)
{
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
    this->fp_val = roundf(value * (1 << this->fract_bits));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->fp_val = other.fp_val;
    return (*this);
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
    return (this->fp_val);
}

void Fixed::setRawBits(int const raw)
{
    this->fp_val = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

bool operator>(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() > b.getRawBits());
}

bool operator<(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() < b.getRawBits());
}

bool operator>=(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() >= b.getRawBits());
}

bool operator<=(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() <= b.getRawBits());
}

bool operator==(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() == b.getRawBits());
}

bool operator!=(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() != b.getRawBits());
}

Fixed operator+(const Fixed& a, const Fixed& b)
{
    return (Fixed(a.toFloat() + b.toFloat()));
}

Fixed operator-(const Fixed& a, const Fixed& b)
{
    return (Fixed(a.toFloat() - b.toFloat()));
}

Fixed operator*(const Fixed& a, const Fixed& b)
{
    return (Fixed(a.toFloat() * b.toFloat()));
}

Fixed operator/(const Fixed& a, const Fixed& b)
{
    return (Fixed(a.toFloat() / b.toFloat()));
}

Fixed operator++(Fixed& a)
{
    a.setRawBits(a.getRawBits() + 1);
    return (a);
}

Fixed operator--(Fixed& a)
{
    a.setRawBits(a.getRawBits() - 1);
    return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b ? a : b);
}

Fixed operator++(Fixed& a, int)
{
    Fixed tmp(a);
    ++a;
    return (tmp);
}

Fixed operator--(Fixed& a, int)
{
    Fixed tmp(a);
    --a;
    return (tmp);
}
