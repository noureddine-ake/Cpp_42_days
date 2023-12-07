/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/07 16:39:17 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    lk ()
{
    system ("leaks exeptions");
}

int main ()
{
    atexit (lk);
    Bureaucrat randome;
    Bureaucrat chef2(randome);
    Bureaucrat salary("Tif", 0);
    Bureaucrat chef("Bob", 150);


    try
    {
        randome.demotion();
        chef.demotion();
        salary.promotion();
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    std::cout << randome << std::endl;
    std::cout << salary << std::endl;
    std::cout << chef << std::endl;
    std::cout << chef2 << std::endl;
}
