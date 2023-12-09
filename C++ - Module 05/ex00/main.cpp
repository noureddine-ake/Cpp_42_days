/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/08 17:29:51 by nakebli          ###   ########.fr       */
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
    Bureaucrat *random = new Bureaucrat();
    Bureaucrat *chef2 = new Bureaucrat(*random);
    Bureaucrat *salary = new Bureaucrat("Tif", 0);
    Bureaucrat *chef = new Bureaucrat("Bob", 150);


    try
    {
        random->demotion();
        chef->demotion();
        salary->promotion();
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    std::cout << *random << std::endl;
    std::cout << *salary << std::endl;
    std::cout << *chef << std::endl;
    std::cout << *chef2 << std::endl;
    delete salary;
    delete chef;
    delete chef2;
    delete random;
}
