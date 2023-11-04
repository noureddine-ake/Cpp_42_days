/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:50:04 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/04 21:30:34 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    std::cout << "DiamondTrap " << _name << std::endl;
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ScavTrap::ScavTrap(obj), FragTrap::FragTrap(obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this != &obj)
    {
        _name = obj._name;
        _hit_points = obj._hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}
