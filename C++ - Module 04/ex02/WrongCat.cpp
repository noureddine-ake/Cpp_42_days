/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:55:36 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/07 20:55:56 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    this->_type = other._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "wrong cat sound" << std::endl;
}