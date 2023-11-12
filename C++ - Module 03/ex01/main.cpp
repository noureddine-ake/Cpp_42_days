/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/05 20:10:17 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	Claptrap bot("adam");
	Claptrap bot2("eve");
	ScavTrap bot3("robot");
	ScavTrap bot4("pipo");
	
	bot3 = bot2;
	bot.setAttackDamage(5);
	bot.attack("eve");
	bot3.takeDamage(5);
	bot3.beRepaired(10);
	bot3.guardGate();
}
