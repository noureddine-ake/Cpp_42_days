/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:17:46 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/03 17:41:20 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : Claptrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    _hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : Claptrap(obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const Claptrap& obj)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &obj)
    {
        _name = obj.getName();
        _hit_points = obj.getHitPoints();
        energy_points = obj.getEnergyPoints();
        attack_damage = obj.getAttackDamage();
    }
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << _name << " take " << amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "ScavTrap " << _name << " be repaired " << amount << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
