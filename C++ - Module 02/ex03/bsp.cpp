/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:58:52 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/31 18:00:54 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculate_area(Point a, Point b, Point c)
{
    float surface = (a.getX().toFloat() * b.getY().toFloat() + \
                    b.getX().toFloat() * c.getY().toFloat() + \
                    c.getX().toFloat() * a.getY().toFloat()) - \
                    (a.getY().toFloat() * b.getX().toFloat() + \
                    b.getY().toFloat() * c.getX().toFloat() + \
                    c.getY().toFloat() * a.getX().toFloat());
    if (surface < 0)
        surface *= -1;
    return (surface);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float surface_abc = calculate_area(a, b, c);
    float surface_abp = calculate_area(a, b, point);
    float surface_acp = calculate_area(a, c, point);
    float surface_bcp = calculate_area(b, c, point);
    if (surface_abc != (surface_abp + surface_acp + surface_bcp) \
    || surface_abp == 0 || surface_acp == 0 || surface_bcp == 0)
        return (false);
    return (true);
}