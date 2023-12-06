/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:18:33 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/05 20:46:37 by nakebli          ###   ########.fr       */
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
    std::cout << "Copy assignment opperator" << std::endl;
    this->_name = obj.getName();
    this->_grade = obj.getGrade();
    return (*this);
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

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor" << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low :(";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high :)";
}