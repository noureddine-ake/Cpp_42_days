/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:55:13 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/17 11:18:05 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    name = "default";
    is_signed = false;
    grade_to_signe = 100;
    grade_to_execute = 100;
}

Form::Form (std::string nm, bool isg, int gts, int gte)
{
    GradeTooHighException gh;
    GradeTooLowException gl;
    name = nm;
    is_signed = isg;
    try
    {
        if (gts < 1)
        {
            grade_to_signe = 1;
            throw gh;
        }
        else if (gts > 150)
        {
            grade_to_signe = 150;
            throw gl;
        }
        else
            grade_to_signe = gts;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
    try
    {
        if (gte < 1)
        {
            grade_to_execute = 1;
            throw gh;
        }
        else if (gte > 150)
        {
            grade_to_execute = 150;
            throw gl;
        }
        else
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
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out     << "Form name         : " << form.getName() << "\n"
            << "Signature Status  : " << form.getSigne() << "\n"
            << "Grade To Signe    : " << form.getGtoSigne() << "\n"
            << "Grade To Execurte : " << form.getGtoexe() << std::endl;
    return (out);
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
    GradeTooHighException gh;

    if (is_signed == true)
    {
        std::cout << "Form is already signed" << std::endl;
        return ;
    }
    try
    {
        if (smn.getGrade() > this->getGtoSigne())
            throw gl;
        else if (smn.getGrade() < 1)
            throw gh;
        else
            is_signed = true;
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

Form::~Form()
{
    
}
