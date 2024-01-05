/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 23:23:05 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/23 05:02:40 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
    std::cout << "----------Int----------" << std::endl;    

    Array<int> a(10);
    Array<int> b(10);

    for (unsigned int i = 0; i < a.size(); i++)
    {
        a[i] = i;
        b[i] = a.size() - i - 1;
    }

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "----------String----------" << std::endl;
 
    Array<std::string> c(3);
    Array<std::string> d(3);

    c[0] = "Hello";
    c[1] = "World";
    c[2] = "!";
    d = c;

    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
}
