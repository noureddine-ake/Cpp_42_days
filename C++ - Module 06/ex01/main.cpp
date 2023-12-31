/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:51:36 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/21 05:28:53 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
 
int main()
{
    Data s;
 
    s.s1 = "Hello";
    s.n = 42;
    s.s2 = "Hi";
 

    uintptr_t p = Serializer::serialize(&s);
    std::cout << p << std::endl;
    Data *data = Serializer::deserialize(p);
    std::cout << *data << std::endl;
    return 0;
}
