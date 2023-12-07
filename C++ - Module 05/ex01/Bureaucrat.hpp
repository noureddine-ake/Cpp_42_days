/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:18:41 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/07 16:17:52 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
    private :
        std::string _name;
        int         _grade;
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
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat&     operator=(const Bureaucrat& other);
        std::ostream&   operator<<(const Bureaucrat& fixed) const;
        std::string     getName() const;
        int             getGrade() const;
        void            promotion();
        void            demotion();
        ~Bureaucrat();
};

#endif
