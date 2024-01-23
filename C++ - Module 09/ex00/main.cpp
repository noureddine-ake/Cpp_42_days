/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:55:39 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/19 13:20:15 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

int main (int ac, char **av)
{
    (void)av;
    if (ac == 2)
    {
        BitcoinExchange exchange;
        exchange.print(av[1]);
        return (0);
    }
    std::cout << "Usage: ./bitcoin [currency]" << std::endl;
    return (1);
}