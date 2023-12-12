/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:34:12 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 01:00:28 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
    private :
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(std::string target, std::string name);
        ShrubberyCreationForm(ShrubberyCreationForm &other);
        ShrubberyCreationForm&	        operator=(AForm const& other);
        ~ShrubberyCreationForm();
        void    execute(Bureaucrat const & executor) const;
        static AForm    *create(std::string target, std::string name);
};

#endif
