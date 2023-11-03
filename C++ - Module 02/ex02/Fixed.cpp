/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:20:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/02 15:01:53 by nakebli          ###   ########.fr       */
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

bool Fixed::operator>(const Fixed& b) const
{
    return (this->getRawBits() > b.getRawBits());
}

bool Fixed::operator<(const Fixed& b) const
{
    return (this->getRawBits() < b.getRawBits());
}

bool Fixed::operator>=(const Fixed& b) const
{
    return (this->getRawBits() >= b.getRawBits());
}

bool Fixed::operator<=(const Fixed& b) const
{
    return (this->getRawBits() <= b.getRawBits());
}

bool Fixed::operator==(const Fixed& b) const
{
    return (this->getRawBits() == b.getRawBits());
}

bool Fixed::operator!=(const Fixed& b) const
{
    return (this->getRawBits() != b.getRawBits());
}

Fixed Fixed::operator+(const Fixed& b)
{
    return (Fixed(this->getRawBits() + b.getRawBits()));
}

Fixed Fixed::operator-(const Fixed& b)
{
    return (Fixed(this->getRawBits() - b.getRawBits()));
}

Fixed Fixed::operator*(const Fixed& b)
{
    Fixed F;
    F.setRawBits((this->getRawBits() * b.getRawBits()) >> this->fract_bits);
    return (F);
}

Fixed Fixed::operator/(const Fixed& b)
{
    Fixed F;
    F.setRawBits((this->getRawBits() << this->fract_bits) / b.getRawBits());
    return (F);
}

Fixed Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b ? a : b);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->setRawBits(this->getRawBits() + 1);
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->setRawBits(this->getRawBits() - 1);
    return (tmp);
}
