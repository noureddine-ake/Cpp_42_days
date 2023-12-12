/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:46:51 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 00:41:27 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->name = "RobotomyRequestForm";
    this->is_signed = false;
    this->grade_to_signe = 72;
    this->grade_to_execute = 45;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    this->name = "RobotomyRequestForm";
    this->is_signed = false;
    this->grade_to_signe = 72;
    this->grade_to_execute = 45;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
{
    *this = other;
}

RobotomyRequestForm&	        RobotomyRequestForm::operator=(AForm const& other)
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

RobotomyRequestForm::~RobotomyRequestForm() {}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    GradeTooLowException gl;
    SignatureMissing sm;
    try
    {
        if (executor.getGrade() > this->grade_to_execute)
            throw gl;
        if (this->is_signed == false)
            throw sm;
        std::cout   << "Brzz tak tak douf douf znnnn " << std::endl
                    << this->target << " has been robotomized successfully 50\% of the time." << std::endl;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}