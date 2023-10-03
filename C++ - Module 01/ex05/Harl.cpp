/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 23:10:34 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/04 00:07:52 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
    std::cout   << "I love having extra bacon for my \
    7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
                << std::endl;
}

void    Harl::info()
{
    std::cout   << "I cannot believe adding extra bacon costs more money. \
    You didn’t put enough bacon in my burger! If you did, I wouldn’t be \
    asking for more!"
                << std::endl;
}

void    Harl::warning()
{
    std::cout   << "I think I deserve to have some extra bacon for free. \
    I’ve been coming for years whereas you started working here since last month."
                << std::endl;
}

void    Harl::error()
{
    std::cout   << "This is unacceptable! I want to speak to the manager now."
                << std::endl;
}

void Harl::complain( std::string level )
{
    Harl    obj;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*table[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i;
    for (i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (obj.*table[i])();
            break;
        }
    }
    if (i == 4)
    {
        std::cout   << "level not found !" << std::endl;
    }
}