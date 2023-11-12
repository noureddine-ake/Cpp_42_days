/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:56:34 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/06 18:58:27 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->_type = obj._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound() const
{
    std::cout << "Animal Speaks" << std::endl;
}
