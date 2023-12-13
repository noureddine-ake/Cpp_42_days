/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:42:24 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 23:21:21 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    this->setName("ShrubberyCreationForm");
    this->setSigne(false);
    this->setGtoSigne(145);
    this->setGtoexe(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    this->setName("ShrubberyCreationForm");
    this->setSigne(false);
    this->setGtoSigne(145);
    this->setGtoexe(137);
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, std::string name)
{
    this->setName(name);
    this->setSigne(false);
    this->setGtoSigne(145);
    this->setGtoexe(137);
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
        this->setName(other.getName());
        this->setSigne(other.getSigne());
        this->setGtoSigne(other.getGtoSigne());
        this->setGtoexe(other.getGtoexe());
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
        if (executor.getGrade() > this->getGtoexe())
            throw gl;
        if (this->getSigne() == false)
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

AForm    *ShrubberyCreationForm::create(std::string target, std::string name)
{
    return (new ShrubberyCreationForm(target, name));
}
