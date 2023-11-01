/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:29:06 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/01 22:51:00 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(5), Fixed(0));
	Point c(Fixed(0), Fixed(5));
	Point point(Fixed(2.5f), Fixed(2.5f));
	if (bsp(a, b, c, point))
		std::cout	<< "the Point x(" << point.getX() << " ," 
					<< point.getY()
					<< ") is inside the triangle abc"
					<< std::endl;
	else
		std::cout	<< "the Point x(" << point.getX() << " ," 
					<< point.getY()
					<< ") is outside the triangle abc"
					<< std::endl;
	return 0;
}
