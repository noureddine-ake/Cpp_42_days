/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:55:13 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/07 16:23:18 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form (std::string nm, bool isg, int gts, int gte)
{
    GradeTooHighException gh;
    GradeTooLowException gl;
    name = nm;
    is_signed = isg;
    try
    {
        if (gts < 1)
            throw gh;
        else if (gts > 150)
            throw gl;
        grade_to_signe = gts;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
    try
    {
        if (gte < 1)
            throw gh;
        else if (gte > 150)
            throw gl;
        grade_to_execute = gte;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}

Form::Form(const Form &obj)
{
    *this = obj;
}

Form&	        Form::operator=(Form const& other)
{
    this->name = other.name;
    this->is_signed = other.is_signed;
    this->grade_to_signe = other.grade_to_signe;
    this->grade_to_execute = other.grade_to_execute;
}

std::ostream&   Form::operator<<(const Form& fixed) const
{
    std::cout   << "Form name         : " << name << std::endl
                << "Signature Status  : " << is_signed << std::endl
                << "Grade To Signe    : " << grade_to_signe << std::endl
                << "Grade To Execurte : " << grade_to_signe << std::endl;
}

std::string     Form::getName() const
{
    return name;
}

bool     Form::getSigne() const
{
    return is_signed;
}

int     Form::getGtoSigne() const
{
    return grade_to_signe;
}

int     Form::getGtoexe() const
{
    return grade_to_execute;
}

void            Form::beSigned(Bureaucrat &smn)
{
    GradeTooLowException gl;

    try
    {
        if (smn.getGrade() < this->getGtoSigne())
            throw gl;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low :(";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high :)";
}
