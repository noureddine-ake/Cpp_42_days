/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:59:25 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/22 22:27:43 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

static void    init_contact(Contact *nouveau, int i)
{
    std::string phone_bumber;
    std::string f_name;
    std::string l_name;
    std::string nickname;
    std::string dark_secret;

    nouveau->set_index(i % 8);
    std::cout << "Enter first name: ";
    std::cin >> f_name;
    nouveau->set_f_name(f_name);
    std::cout << "Enter last name: ";
    std::cin >> l_name;
    nouveau->set_l_name(l_name);
    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    nouveau->set_nickname(nickname);
    std::cout << "Enter Phone number: ";
    std::cin >> phone_bumber;
    nouveau->set_phone_number(phone_bumber);
    std::cout << "Enter dark secret: ";
    std::cin >> dark_secret;
    nouveau->set_d_secret(dark_secret);
}

int main ()
{
    PhoneBook   phonebook;
    std::string cmd;
    long        i;

    i = 0;
    while (1)
    {
        Contact     nouveau;
        std::cout << "Enter a Command: ";
        std::cin >> cmd;
        if (cmd == "ADD")
        {
            init_contact(&nouveau, i);
            phonebook.add_contact(nouveau, i);
            i++;
        }
        else if (cmd == "SEARCH")
            phonebook.search_contact();
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "Command not found" << std::endl;
    }
}