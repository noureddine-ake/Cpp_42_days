/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:43:26 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/06 00:27:45 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

    #include "ClapTrap.hpp"
    # include "ScavTrap.hpp"
    # include "FragTrap.hpp"
    #include <iostream>

    class DiamondTrap : public ScavTrap, public FragTrap
    {
        private:
            std::string _name;
        public:
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap(DiamondTrap const & src);
            DiamondTrap & operator=(DiamondTrap const & rhs);
            void attack(std::string const & target);
            ~DiamondTrap(void);
            void whoAmI(void);
    };

#endif