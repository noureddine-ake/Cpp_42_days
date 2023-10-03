/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 23:10:34 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/04 00:23:24 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
    std::cout   << "[ WARNING ]" << std::endl;
    std::cout   << "I love having extra bacon for my \n";
    std::cout   << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
                << std::endl;
}

void    Harl::info()
{
    std::cout   << "[ INFO ]" << std::endl;
    std::cout   << "I cannot believe adding extra bacon costs more money. \n";
    std::cout   << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be \n";
    std::cout   << "asking for more!"
                << std::endl;
}

void    Harl::warning()
{
    std::cout   << "[ WARNING ]" << std::endl;
    std::cout   << "I think I deserve to have some extra bacon for free. \n";
    std::cout   << "I’ve been coming for years whereas you started working here since last month."
                << std::endl;
}

void    Harl::error()
{
    std::cout   << "[ ERROR ]" << std::endl;
    std::cout   << "This is unacceptable! I want to speak to the manager now."
                << std::endl;
}

void Harl::complain( std::string level )
{
    Harl    obj;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*table[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i = 0;
    while (level[i] && levels[i] != level)
        i++;
    switch (i)
    {
        case 0:
            (obj.*table[0])();
        case 1:
            (obj.*table[1])();
        case 2:
            (obj.*table[2])();
        case 3:
            (obj.*table[3])();
            break;
        default:
            std::cout   << "[ Probably complaining about insignificant problems ]" 
                        << std::endl;
            break;
    }
}