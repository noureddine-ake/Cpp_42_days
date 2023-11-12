/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:37:59 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/08 17:35:19 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Cat";
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    this->_type = other._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->_brain;
}

void Cat::makeSound() const
{
    std::cout << "Meeeaawwwwwwwww khkhkhkh" << std::endl;
}
