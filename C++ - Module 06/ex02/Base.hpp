/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:26:51 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/18 23:35:26 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
    public:
        Base() {};
        virtual ~Base() {};
};

class A : public Base {
    public:
        A() {};
        ~A() {};
};
class B : public Base {
    public:
        B() {};
        ~B() {};
};
class C : public Base {
    public:
        C() {};
        ~C() {};
};


Base *generate(void);
void identify_from_ptr(Base *p);
void identify_from_rfc(Base &p);


#endif