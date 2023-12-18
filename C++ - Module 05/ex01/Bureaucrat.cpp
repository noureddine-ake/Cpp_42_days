/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:18:33 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/17 11:14:07 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor" << std::endl;
    _name = "user";
    _grade = 100;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Bureaucrat parametred constructor" << std::endl;
    _name = name;
    GradeTooHighException gh;
    GradeTooLowException gl;
    try
    {
        if (grade > 150)
        {
            _grade = 150;
            throw gl;
        }
        else if (grade < 1)
        {
            _grade = 1;
            throw gh;
        }
        else
            this->_grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    std::cout << "Copy assignment opperator" << std::endl;
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
    std::cout << "Bureaucrat Copy constructor" << std::endl;
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
        else
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
        else
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

void    Bureaucrat::signForm(Form &form)
{
    if (form.getSigne())
    {
        std::cout << this->getName() << " cannot sign " << form.getName() << " because it's already signed" << std::endl;
        return ;
    }
    try
    {
        form.beSigned(*this);
        if (form.getSigne())
            std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
