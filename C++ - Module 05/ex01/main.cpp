/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:07:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/21 05:46:48 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void    lk ()
{
    system ("leaks exeptions");
}

int main ()
{
    atexit (lk);
    Bureaucrat randome;
    Bureaucrat chef2(randome);
    Bureaucrat salary("Tif", 0);
    Bureaucrat chef("Bob", 142);


    try
    {
        randome.demotion();
        chef.demotion();
        salary.promotion();
    }
    catch (const std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    std::cout << randome << std::endl;
    std::cout << salary << std::endl;
    std::cout << chef << std::endl;
    std::cout << chef2 << std::endl;

    Form *f = new Form("Hiring", false, 120, 120);
    Form *f2 = new Form("Hiring", false, 120, 120);
    std::cout << *f << std::endl;
    try{
        f->beSigned(chef2);
        f2->beSigned(chef);
    }
    catch (const std::exception &e)
    {
        std::cout << "Error : Form can not be signed : " << e.what() << std::endl;
    }
    delete f;
    delete f2;
}
