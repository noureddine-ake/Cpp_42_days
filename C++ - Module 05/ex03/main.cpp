/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 01:08:57 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void    lk ()
{
    system ("leaks exeptions");
}

int main ()
{
    atexit (lk);
    Bureaucrat chef("Bob", 5);
    Intern intern;
    AForm *f;
    AForm *f2;
    AForm *f3;

    f = intern.makeForm("shrubbery creation", "home");
    f2 = intern.makeForm("robotomy request", "home");
    f3 = intern.makeForm("presidential pardon", "home");
    if (!f || !f2 || !f3)
        return (0);
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
        chef.signForm(*f);
        chef.executeForm(*f);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        f2->beSigned(chef);
        f2->execute(chef);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }  
    std::cout << std::endl << " ----------------------------- " << std::endl;
    try
    {
        chef.signForm(*f3);
        chef.signForm(*f3);
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
