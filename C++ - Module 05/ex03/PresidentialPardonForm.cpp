/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:58:14 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 23:18:54 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->setName("PresidentialPardonForm");
    this->setSigne(false);
    this->setGtoSigne(25);
    this->setGtoexe(5);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    this->setName("PresidentialPardonForm");
    this->setSigne(false);
    this->setGtoSigne(25);
    this->setGtoexe(5);
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string name)
{
    this->setName(name);
    this->setSigne(false);
    this->setGtoSigne(25);
    this->setGtoexe(5);
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
    *this = other;
}

PresidentialPardonForm&	        PresidentialPardonForm::operator=(AForm const& other)
{
    if (this!=&other)
    {
        this->setName(other.getName());
        this->setSigne(other.getSigne());
        this->setGtoSigne(other.getGtoSigne());
        this->setGtoexe(other.getGtoexe());
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    GradeTooLowException gl;
    SignatureMissing sm;
    try
    {
        if (executor.getGrade() > this->getGtoexe())
            throw gl;
        if (this->getSigne() == false)
            throw sm;
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}

AForm    *PresidentialPardonForm::create(std::string target, std::string name)
{
    return (new PresidentialPardonForm(target, name));
}
