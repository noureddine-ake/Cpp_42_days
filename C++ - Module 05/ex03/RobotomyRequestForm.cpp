/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:46:51 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 23:18:30 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->setName("RobotomyRequestForm");
    this->setSigne(false);
    this->setGtoSigne(72);
    this->setGtoexe(45);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    this->setName("RobotomyRequestForm");
    this->setSigne(false);
    this->setGtoSigne(72);
    this->setGtoexe(45);
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, std::string name)
{
    this->setName(name);
    this->setSigne(false);
    this->setGtoSigne(72);
    this->setGtoexe(45);
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
        this->setName(other.getName());
        this->setSigne(other.getSigne());
        this->setGtoSigne(other.getGtoSigne());
        this->setGtoexe(other.getGtoexe());
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
        if (executor.getGrade() > this->getGtoexe())
            throw gl;
        if (this->getSigne() == false)
            throw sm;
        std::cout   << "Brzz tak tak douf douf znnnn " << std::endl
                    << this->target << " has been robotomized successfully 50\% of the time." << std::endl;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}

AForm    *RobotomyRequestForm::create(std::string target, std::string name)
{
    return (new RobotomyRequestForm(target, name));
}