/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/04 21:28:40 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondTrap("DiamondTrap");
	std::cout << std::endl;
	std::cout << std::endl;
	diamondTrap.attack("target");
	diamondTrap.whoAmI();
	std::cout << std::endl;
	std::cout << std::endl;
}
