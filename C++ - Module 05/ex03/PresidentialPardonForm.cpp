/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:58:14 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 01:00:04 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->name = "PresidentialPardonForm";
    this->is_signed = false;
    this->grade_to_signe = 25;
    this->grade_to_execute = 5;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    this->name = "PresidentialPardonForm";
    this->is_signed = false;
    this->grade_to_signe = 25;
    this->grade_to_execute = 5;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string name)
{
    this->name = name;
    this->is_signed = false;
    this->grade_to_signe = 25;
    this->grade_to_execute = 5;
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
        this->name = other.getName();
        this->is_signed = other.getSigne();
        this->grade_to_signe = other.getGtoSigne();
        this->grade_to_execute = other.getGtoexe();
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
        if (executor.getGrade() > this->grade_to_execute)
            throw gl;
        if (this->is_signed == false)
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
