/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:41:43 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 05:33:13 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac , char **av)
{
	if (ac > 1)
	{
		std::vector<int> _v;
		PmergeMe p;
		try
		{
			sort_arr(_v, &av[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::deque<int> _d;
		try
		{
			sort_arr(_d, &av[1]);
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