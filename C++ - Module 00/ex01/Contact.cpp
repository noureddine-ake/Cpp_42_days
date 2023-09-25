/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:04:06 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/22 21:13:32 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact()
{
    this->index = 0;
    this->phone_number = "";
    this->f_name = "";
    this->l_name = "";
    this->nickname = "";
    this->d_secret = "";
}

Contact::~Contact()
{
    return ;
}

// setters functions

void Contact::set_f_name(std::string f_name)
{
    this->f_name = f_name;
}

void Contact::set_l_name(std::string l_name)
{
    this->l_name = l_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_index(int index)
{
    this->index = index;
}

void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}

void Contact::set_d_secret(std::string d_secret)
{
    this->d_secret = d_secret;
}

// getters functions

std::string Contact::get_f_name()
{
    return (this->f_name);
}

std::string Contact::get_l_name()
{
    return (this->l_name);
}

std::string Contact::get_nickname()
{
    return (this->nickname);
}

int Contact::get_index()
{
    return (this->index);
}

std::string Contact::get_phone_number()
{
    return (this->phone_number);
}

std::string Contact::get_d_secret()
{
    return (this->d_secret);
}
