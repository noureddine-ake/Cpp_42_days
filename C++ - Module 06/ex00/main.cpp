/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:38:25 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/17 10:19:49 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return (1);
    }
    std::string str = argv[1];
    ScalarConverter::convert(str);
    return (0);
}
