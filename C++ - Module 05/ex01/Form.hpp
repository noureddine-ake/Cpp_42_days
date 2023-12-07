/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:55:39 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/07 16:23:50 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private :
        std::string   name;
        bool                is_signed;
        int           grade_to_signe;
        int           grade_to_execute;
    public :
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        Form(std::string nm, bool isg, int gts, int gte);
        Form(const Form &obj);
        ~Form();
        Form&	        operator=(Form const& other);
        std::ostream&   operator<<(const Form& fixed) const;
        std::string     getName() const;
        bool            getSigne() const;
        int             getGtoSigne() const;
        int             getGtoexe() const;
        void            beSigned(Bureaucrat &smn);
};

#endif