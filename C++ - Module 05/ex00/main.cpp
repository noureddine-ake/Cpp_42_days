/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/05 20:44:34 by nakebli          ###   ########.fr       */
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
    std::cout << random->getName() << "  " << random->getGrade() << std::endl;
    std::cout << salary->getName() << "  " << salary->getGrade() << std::endl;
    std::cout << chef->getName() << "  " << chef->getGrade() << std::endl;
    std::cout << chef2->getName() << "  " << chef2->getGrade() << std::endl;
    delete salary;
    delete chef;
    delete chef2;
    delete random;
}
