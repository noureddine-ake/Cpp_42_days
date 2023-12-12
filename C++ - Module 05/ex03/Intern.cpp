/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 23:15:28 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 01:01:49 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern &other)
{
    *this = other;
}

Intern&	        Intern::operator=(Intern const& other)
{
    (void)other;
    return (*this);
}

Intern::~Intern() {}

AForm*  Intern::makeForm(std::string formName, std::string target)
{
    int i;
    AForm*  form;
    std::string names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm*  (*func[])(std::string target, std:: string name) = {ShrubberyCreationForm::create, RobotomyRequestForm::create, PresidentialPardonForm::create};

    for (i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            form = func[i](target, formName);
            std::cout << "Intern creates " << formName << std::endl;
            return (form);
        }
    }
    if (i == 3)
        std::cout << "Intern can't create " << formName << std::endl;
    return (NULL);
}
