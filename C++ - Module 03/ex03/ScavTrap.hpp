/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:45:16 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/06 00:28:02 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual Claptrap
{
    public:
        ScavTrap ();
        ScavTrap (std::string name);
        ScavTrap (const ScavTrap &obj);
        ScavTrap &operator=(const Claptrap& obj);
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
        ~ScavTrap();
};

#endif