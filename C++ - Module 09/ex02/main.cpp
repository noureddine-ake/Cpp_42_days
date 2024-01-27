/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:41:43 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/27 11:45:13 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac , char **av)
{
	if (ac > 1)
	{
		PmergeMe p;
		try
		{
			p.sort_arr(&av[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		return (0);
	}
	std::cout << "invalid arguments" << std::endl;
	return (0);
}
