/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:17:42 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/31 12:57:36 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y)
{
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point& other)
{
    if (this != &other)
    {
        const_cast<Fixed&>(this->x) = other.x;
        const_cast<Fixed&>(this->y) = other.y;
    }
    return (*this);
}

Fixed Point::getX() const
{
    return (this->x);
}

Fixed Point::getY() const
{
    return (this->y);
}
