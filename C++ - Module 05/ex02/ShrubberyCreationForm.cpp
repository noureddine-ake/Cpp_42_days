/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:42:24 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 00:41:13 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    this->name = "ShrubberyCreationForm";
    this->is_signed = false;
    this->grade_to_signe = 145;
    this->grade_to_execute = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    this->name = "ShrubberyCreationForm";
    this->is_signed = false;
    this->grade_to_signe = 145;
    this->grade_to_execute = 137;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
    *this = other;
}

ShrubberyCreationForm&	        ShrubberyCreationForm::operator=(AForm const& other)
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

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    GradeTooLowException gl;
    SignatureMissing sm;
    try
    {
        if (executor.getGrade() > this->grade_to_execute)
            throw gl;
        if (this->is_signed == false)
            throw sm;
        std::ofstream ofs(this->target + "_shrubbery" );
        if (ofs.is_open()) {
            const std::string green = "\033[32m";
            const std::string brown = "\033[33m";
            const std::string reset = "\033[0m";

            ofs << "        ^        " << std::endl;
            ofs << "       ^^^       " << std::endl;
            ofs << "      ^^^^^      " << std::endl;
            ofs << "     ^^^^^^^     " << std::endl;
            ofs << "    ^^^^^^^^^    " << std::endl;
            ofs << "   ^^^^^^^^^^^   " << std::endl;
            ofs << "  ^^^^^^^^^^^^^  " << std::endl;
            ofs << " ^^^^^^^^^^^^^^^ " << std::endl;
            ofs << "^^^^^^^^^^^^^^^^^" << std::endl;
            ofs << "       |||       " << std::endl;
            ofs.close();
        }
        else {
            std::cerr << "Unable to open the file." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        throw ;
    }
}