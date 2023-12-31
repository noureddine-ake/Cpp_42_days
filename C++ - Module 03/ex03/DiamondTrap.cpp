/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:50:04 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/06 00:45:25 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
    this->_name = name + "_clap_name";
    this->_hit_points = FragTrap::_hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = obj;
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
    std::cout << "I am a DiamondTrap my name is : " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}
