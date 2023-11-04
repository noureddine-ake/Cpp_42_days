/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/04 21:17:29 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public Claptrap
{
    public:
        FragTrap ();
        FragTrap (std::string name);
        FragTrap (const FragTrap &obj);
        FragTrap &operator=(const Claptrap& obj);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys();
        ~FragTrap();
};


#endif