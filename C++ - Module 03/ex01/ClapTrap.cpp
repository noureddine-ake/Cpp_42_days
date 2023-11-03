/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:33:53 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/03 17:36:03 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap()
{
    std::cout << "Claptrap Default constructor called" << std::endl;
}

Claptrap::Claptrap(std::string name)
{
    std::cout << "Claptrap Parameter constructor called" << std::endl;
    this->_name = name;
    this->_hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

Claptrap::Claptrap(const Claptrap &obj)
{
    std::cout << "Claptrap Copy constructor called" << std::endl;
    *this = obj;
}

Claptrap &Claptrap::operator=(const Claptrap &obj)
{
    std::cout << "Claptrap Assignation operator called" << std::endl;
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

void Claptrap::attack(std::string const & target)
{
    if (this->energy_points > 0)
    {
        this->energy_points -= 1;
        std::cout << "Claptrap " << this->_name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    }
}

void Claptrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)this->_hit_points > amount)
    {
        this->_hit_points -= amount;
        std::cout << "Claptrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
    }
    else
    {
        this->_hit_points = 0;
        std::cout << "Claptrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
        std::cout << "Claptrap " << this->_name << " is dead!" << std::endl;
    }
}

void Claptrap::beRepaired(unsigned int amount)
{
    if (this->energy_points > 0)
    {
        this->energy_points--;
        this->_hit_points += amount;
    }
    std::cout << "Claptrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
}

Claptrap::~Claptrap()
{
    std::cout << "Claptrap Destructor called" << std::endl;
}

void Claptrap::setName(std::string name)
{
    this->_name = name;
}

void Claptrap::setHitPoints(int hit_points)
{
    this->_hit_points = hit_points;
}

void Claptrap::setEnergyPoints(int energy_points)
{
    this->energy_points = energy_points;
}

void Claptrap::setAttackDamage(int attack_damage)
{
    this->attack_damage = attack_damage;
}

std::string Claptrap::getName() const
{
    return (this->_name);
}

int Claptrap::getHitPoints() const
{
    return (this->_hit_points);
}

int Claptrap::getEnergyPoints() const
{
    return (this->energy_points);
}

int Claptrap::getAttackDamage() const
{
    return (this->attack_damage);
}
