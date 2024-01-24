/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:08 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/24 01:52:00 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    PmergeMe::parseData(char **av, std::vector<int> & _a)
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

void 	merge_insertion_sort(std::vector<int> & v)
{
	std::vector<std::pair<int, int> > tmp;
	std::vector<int>::iterator it = v.begin();

	for (; it != v.end(); it = it + 2)
	{
		if (it == v.end() - 1)
		{
			tmp.push_back(std::make_pair(-1, *it));
			break ;
		}
		else if (*it < *(it + 1))
			tmp.push_back(std::make_pair(*(it + 1), *it));
		else
			tmp.push_back(std::make_pair(*it, *(it + 1)));
	}
	std::sort(tmp.begin(), tmp.end());
	if (v.size() % 2 == 1)
	{
		tmp.push_back(std::make_pair(-1, tmp[0].second));
		tmp.erase(tmp.begin());
	}
	for (size_t i = 0; i < tmp.size(); i++)
	{
		std::cout << tmp[i].first << " " << tmp[i].second << std::endl;
	}
}

void    PmergeMe::sort_arr(std::vector<int> & v, char **av)
{
	try {
		parseData(av, v);
		merge_insertion_sort(v);
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


void    PmergeMe::print_arr(std::vector<int> & arr)
{
	std::vector<int>::iterator it = arr.begin();
	for (; it != arr.end(); it++)
		std::cout << *it << std::endl;
}