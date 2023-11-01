/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:58:48 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/01 19:37:15 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 fp_val;
        const static int    fract_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& src);
        Fixed(const int value);
        Fixed(const float value);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed& b) const;
        bool operator<(const Fixed& b) const;
        bool operator>=(const Fixed& b) const;
        bool operator<=(const Fixed& b) const;
        bool operator==(const Fixed& b) const;
        bool operator!=(const Fixed& b) const;
        Fixed operator+(const Fixed& b);
        Fixed operator-(const Fixed& b);
        Fixed operator*(const Fixed& b);
        Fixed operator/(const Fixed& b);
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif