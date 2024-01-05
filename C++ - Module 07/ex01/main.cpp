/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 00:13:39 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/23 04:28:20 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int     int_arr[5] = {1, 2, 3, 4, 5};
    float   float_arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char    char_arr[5] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "--------------------INT----------------" << std::endl;
    iter(int_arr, 5, print);
    std::cout << "--------------------FLOAT----------------" << std::endl;
    iter(float_arr, 5, print);
    std::cout << "--------------------CHAR----------------" << std::endl;
    iter(char_arr, 5, print);
    return (0);
}
