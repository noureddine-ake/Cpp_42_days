/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:55:39 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/12 23:09:09 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    protected :
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
        class SignatureMissing : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        AForm();
        AForm(std::string nm, bool isg, int gts, int gte);
        AForm(const AForm &obj);
        virtual ~AForm();
        AForm&	        operator=(AForm const& other);
        std::string     getName() const;
        bool            getSigne() const;
        int             getGtoSigne() const;
        int             getGtoexe() const;
        void            setName(std::string nm);
        void            setSigne(bool isg);
        void            setGtoSigne(int gts);
        void            setGtoexe(int gte);
        void            beSigned(Bureaucrat &smn);
        virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& bc);

#endif