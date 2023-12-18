/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:51:36 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/18 22:24:56 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

using namespace std;
 
int main()
{
    Data s;
 
    s.s1 = "Hello";
    s.n = 42;
    s.s2 = "Hi";
 

    uintptr_t p = Serializer::serialize(&s);
    cout << p << endl;
    Data *data = Serializer::deserialize(p);
    cout << *data << endl;
    return 0;
}