/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:25:18 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/22 22:41:30 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"
#include "Contact.hpp"

std::string ReduceStr(std::string str)
{
    std::string str2;
    if (str.length() > 10)
    {
        str2 = str.substr(0, 9);
        str2 += ".";
    }
    else
        str2 = str;
    return (str2);
}

void    PhoneBook::add_contact(Contact nouveau, int i)
{
    ctt[i % 8] = nouveau;
}

PhoneBook::PhoneBook()
{
    int i;
    i = 0;
    while (i < 8)
    {
        this->ctt[i].set_index(0);
        this->ctt[i].set_f_name("");
        this->ctt[i].set_l_name("");
        this->ctt[i].set_nickname ("");
        i++;
    }
}

void    PhoneBook::search_contact()
{
    int i;
    int index;

    i = 0;
    std::cout << "   Index  |First Name| Last Name| Nickname " << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    while (i < 8 && ctt[i].get_f_name() != "")
    {
        std::cout   << std::setw(10) << ctt[i].get_index() + 1 << "|";
        std::cout   << std::setw(10) << ReduceStr(ctt[i].get_f_name()) <<"|";
        std::cout   << std::setw(10) << ReduceStr(ctt[i].get_l_name()) <<"|";
        std::cout   << std::setw(10) << ReduceStr(ctt[i].get_nickname()) << std::endl;
        i++;
    }
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "     -> Enter an index: ";
    std::cin >> index;
    i = 0;
    while (i < 8 && ctt[i].get_f_name() != "")
    {
        if (ctt[i].get_index() == index - 1)
        {
            std::cout   << std::setw(15) << "index : "<< ctt[i].get_index() + 1 << std::endl
                        << std::setw(15) << "first name : "<< ctt[i].get_f_name() << std::endl
                        << std::setw(15) << "last name : "<< ctt[i].get_l_name() << std::endl
                        << std::setw(15) << "Nickname : "<< ctt[i].get_nickname() << std::endl
                        << std::setw(15) << "Dark secret : "<< ctt[i].get_d_secret() << std::endl
                        << std::setw(15) << "phone : "<< ctt[i].get_phone_number() << std::endl;
            break;
        }
        i++;
    }
}
