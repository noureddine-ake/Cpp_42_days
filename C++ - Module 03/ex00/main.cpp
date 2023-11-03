/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/03 13:42:35 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	Claptrap bot("adam");
	Claptrap bot2("eve");
	Claptrap bot3;
	
	bot3 = bot2;
	bot.setAttackDamage(5);
	bot.attack("eve");
	bot2.takeDamage(5);
	bot3.beRepaired(10);
}
