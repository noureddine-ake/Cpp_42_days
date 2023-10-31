/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:15:25 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/31 12:57:40 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const Fixed& x, const Fixed& y);
        Point(const Point& other);
        ~Point();
        Point& operator=(const Point& other);
        Fixed getX() const;
        Fixed getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif