/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:18:33 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 01:09:48 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    _name = "user";
    _grade = 100;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    _name = name;
    GradeTooHighException gh;
    GradeTooHighException gl;
    try
    {
        if (grade > 150)
            throw gl;
        if (grade < 1)
            throw gh;
        this->_grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    this->_name = obj.getName();
    this->_grade = obj.getGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bc)
{
    out     << "Form name   : " << bc.getName() << "\t"
            << "His Grade   : " << bc.getGrade() << std::endl;
    return (out);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void        Bureaucrat::promotion()
{
    GradeTooHighException gh;
    try
    {
        if (this->getGrade() - 1 < 1)
            throw gh;
        _grade--;
    }
    catch(const std::exception& e)
    {
        throw;
    }
}

void        Bureaucrat::demotion()
{
    GradeTooLowException gl;
    try
    {
        if (this->getGrade() + 1 > 150)
            throw gl;
        _grade++;
    }
    catch(const std::exception& e)
    {
        throw;
    }
}

Bureaucrat::~Bureaucrat() {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low :(";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high :)";
}

void    Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}