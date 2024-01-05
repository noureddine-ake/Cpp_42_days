/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:20:18 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/21 02:41:10 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    ScalarConverter::convert(std::string str)
{
    std::cout << "char: ";
    try
    {
        char c = static_cast<char>(std::stoi(str));
        if (!isprint(c))
            std::cout << "Character is not displayable" << std::endl;
        else
            std::cout << "'" << c << "'" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "int: ";
    try
    {
        int i = static_cast<int>(std::stoi(str));
        std::cout << i << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "float: ";
    try
    {
        float f = static_cast<float>(std::stof(str));
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "double: ";
    try
    {
        double d = static_cast<double>(std::stod(str));
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}
