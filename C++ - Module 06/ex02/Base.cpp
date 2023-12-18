/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:31:17 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/18 23:34:16 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0)
    {
        std::cout << "A" << std::endl;
        return (new A);
    }
    else if (i == 1)
    {
        std::cout << "B" << std::endl;
        return (new B);

    }
    else
    {
        std::cout << "C" << std::endl;
        return (new C);
    }
}

void identify_from_ptr(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify_from_rfc(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch(const std::exception& e)
            {
                std::cout << "Unknown" << std::endl;
            }
            
        }
        
    }
}