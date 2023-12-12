/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:44:22 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 01:00:09 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>

class AForm;

class RobotomyRequestForm : public AForm
{
    private :
        std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(std::string target, std::string name);
        RobotomyRequestForm(RobotomyRequestForm &other);
        RobotomyRequestForm&	        operator=(AForm const& other);
        ~RobotomyRequestForm();
        void    execute(Bureaucrat const & executor) const;
        static AForm    *create(std::string target, std::string name);
};

#endif