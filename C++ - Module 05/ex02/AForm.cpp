/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:55:13 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 21:37:06 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
{
    name = "default";
    is_signed = false;
    grade_to_signe = 100;
    grade_to_execute = 100;
}

AForm::AForm (std::string nm, bool isg, int gts, int gte)
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

AForm::AForm(const AForm &obj)
{
    *this = obj;
}

AForm&	        AForm::operator=(AForm const& other)
{
    this->name = other.name;
    this->is_signed = other.is_signed;
    this->grade_to_signe = other.grade_to_signe;
    this->grade_to_execute = other.grade_to_execute;
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const AForm& Aform)
{
    out     << "AForm name         : " << Aform.getName() << std::endl
            << "Signature Status  : " << Aform.getSigne() << std::endl
            << "Grade To Signe    : " << Aform.getGtoSigne() << std::endl
            << "Grade To Execurte : " << Aform.getGtoexe() << std::endl;
    return (out);
}

std::string     AForm::getName() const
{
    return name;
}

bool     AForm::getSigne() const
{
    return is_signed;
}

int     AForm::getGtoSigne() const
{
    return grade_to_signe;
}

int     AForm::getGtoexe() const
{
    return grade_to_execute;
}

void            AForm::beSigned(Bureaucrat &smn)
{
    GradeTooLowException gl;
    GradeTooHighException gh;

    if (is_signed == true)
        return ;
    try
    {
        if (smn.getGrade() > this->getGtoSigne())
        {
            throw gl;
        }
        if (smn.getGrade() < 1)
            throw gh;
        is_signed = true;
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low :(";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high :)";
}

const char* AForm::SignatureMissing::what() const throw()
{
    return "Form not signed :)";
}

AForm::~AForm()
{
    
}

void    AForm::setName(std::string nm)
{
    name = nm;
}

void    AForm::setSigne(bool isg)
{
    is_signed = isg;
}

void    AForm::setGtoSigne(int gts)
{
    grade_to_signe = gts;
}

void    AForm::setGtoexe(int gte)
{
    grade_to_execute = gte;
}
