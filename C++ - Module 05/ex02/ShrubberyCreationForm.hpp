/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:34:12 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/17 10:51:52 by nakebli          ###   ########.fr       */
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

        void    write_tree() const;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &other);
        ShrubberyCreationForm&	        operator=(AForm const& other);
        ~ShrubberyCreationForm();
        void    execute(Bureaucrat const & executor) const;
};

#endif
