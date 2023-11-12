/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/05 20:15:59 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public Claptrap
{
    public:
        FragTrap();
        FragTrap (std::string name);
        FragTrap (const FragTrap &obj);
        FragTrap &operator=(const Claptrap& obj);
        void attack(std::string const & target);
        void highFivesGuys();
        ~FragTrap();
};


#endif