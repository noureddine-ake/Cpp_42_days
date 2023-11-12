/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:17:22 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/12 13:06:09 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::~ICharacter(void)
{
}

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name)
{
    // std::cout << "Character parameter constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
    // std::cout << "Character Copy constructor called" << std::endl;
    *this = src;
}

Character::~Character()
{
    // std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

Character &Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = rhs._inventory[i]->clone();
        }
    }
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    // std::cout << "unequip" << std::endl;
    if (idx >= 0 && idx < 4)
    {
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}
