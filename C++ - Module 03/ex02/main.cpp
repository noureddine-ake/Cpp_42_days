/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/03 20:24:29 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	Claptrap bot("adam");
	Claptrap bot2("eve");
	FragTrap bot3("robot");
	FragTrap bot4("pipo");
	ScavTrap bot5("scav");
	
	bot3 = bot2;
	bot.setAttackDamage(5);
	bot.attack("eve");
	bot2.takeDamage(5);
	bot3.beRepaired(10);
	bot5.guardGate();
	bot3.highFivesGuys();
}
