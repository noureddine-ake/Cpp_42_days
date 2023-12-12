/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 00:44:14 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    lk ()
{
    system ("leaks exeptions");
}

int main ()
{
    atexit (lk);
    Bureaucrat chef("Bob", 2);
    AForm *f = new ShrubberyCreationForm("home");
    AForm *f2 = new RobotomyRequestForm("home");
    AForm *f3 = new PresidentialPardonForm("home");

    
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        chef.demotion();
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        f->beSigned(chef);
        f->execute(chef);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        chef.signForm(*f2);
        chef.executeForm(*f2);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        f3->beSigned(chef);
        f3->execute(chef);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    std::cout << chef << std::endl;
    delete f;
    delete f2;
    delete f3;

    return (0);
}
