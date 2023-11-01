/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:58:52 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/01 22:46:25 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calculate_area(Point a, Point b, Point c)
{
    Fixed surface = Fixed((a.getX().toFloat() * b.getY().toFloat() + \
                    b.getX().toFloat() * c.getY().toFloat() + \
                    c.getX().toFloat() * a.getY().toFloat()) - \
                    (a.getY().toFloat() * b.getX().toFloat() + \
                    b.getY().toFloat() * c.getX().toFloat() + \
                    c.getY().toFloat() * a.getX().toFloat()));
    if (surface.getRawBits() < 0)
        surface.setRawBits(surface.getRawBits() * -1);
    return (surface);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed surface_abc = calculate_area(a, b, c);
    Fixed surface_abp = calculate_area(a, b, point);
    Fixed surface_acp = calculate_area(a, c, point);
    Fixed surface_bcp = calculate_area(b, c, point);
    if (surface_abc.getRawBits() != (surface_abp.getRawBits() + surface_acp.getRawBits() + surface_bcp.getRawBits()) \
    || surface_abp.getRawBits() == 0 || surface_acp.getRawBits() == 0 || surface_bcp.getRawBits() == 0)
        return (false);
    return (true);
}