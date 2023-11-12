/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:42:30 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/08 17:37:46 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Dog";
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    this->_type = other._type;
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "HOWWW hhHOW" << std::endl;
}
