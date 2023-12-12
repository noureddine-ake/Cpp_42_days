/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:57:25 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 01:01:17 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(std::string target, std::string name);
        PresidentialPardonForm(PresidentialPardonForm &other);
        PresidentialPardonForm&	        operator=(AForm const& other);
        ~PresidentialPardonForm();
        void    execute(Bureaucrat const & executor) const;
        static AForm    *create(std::string target, std::string name);
};

#endif