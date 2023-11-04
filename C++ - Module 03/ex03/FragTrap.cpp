/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:53:10 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/04 21:17:40 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : Claptrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    _hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : Claptrap(obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const Claptrap& obj)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &obj)
    {
        _name = obj.getName();
        _hit_points = obj.getHitPoints();
        energy_points = obj.getEnergyPoints();
        attack_damage = obj.getAttackDamage();
    }
    return (*this);
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << _name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << _name << " take " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FragTrap " << _name << " be repaired " << amount << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " high fives guys" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}