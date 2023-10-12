/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:58:48 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/05 21:32:40 by nakebli          ###   ########.fr       */
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
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif