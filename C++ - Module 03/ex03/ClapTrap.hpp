/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:38:17 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/03 17:35:32 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class Claptrap
{
    protected:
        std::string _name;
        int _hit_points;
        int energy_points;
        int attack_damage;
    public:
        Claptrap();
        Claptrap(std::string name);
        Claptrap(const Claptrap &obj);
        void setName(std::string name);
        void setHitPoints(int hit_points);
        void setEnergyPoints(int energy_points);
        void setAttackDamage(int attack_damage);
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        Claptrap &operator=(const Claptrap &obj);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~Claptrap();
};

#endif