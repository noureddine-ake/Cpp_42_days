/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:08 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 05:27:42 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void    parseData(char **av, T & _a)
{
	int num;

	for (size_t i = 0; av[i]; i++)
	{
		for (size_t j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				throw std::exception();
		}
		num = atoi(av[i]);
		_a.push_back(num);
	}
}

template <typename T>
void    sort_arr(T & v, char **av)
{
	try {
		parseData(av, v);
	}
	catch (const std::exception& e)
	{
		std::cout << "invalid arguments" << std::endl;
	}
}


std::vector<int>    PmergeMe::getVector() const
{
	return (_v);
}

std::deque<int>     PmergeMe::getDeque() const
{
	return (_d);
}

template <typename T>
void    print_arr(T& arr)
{
	std::vector<int>::iterator it = arr.begin();
	for (; it != arr.end(); it++)
		std::cout << *it << std::endl;
}