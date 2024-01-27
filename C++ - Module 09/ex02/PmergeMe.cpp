/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:08 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/27 13:31:56 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    PmergeMe::parseData(char **av)
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
		_v.push_back(num);
		_deq.push_back(num);
	}
	if (_v.size() < 2)
		throw std::exception();
}

void	merge(std::vector<std::pair<int, int> >& tmp, int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;
	std::vector<std::pair<int, int> > tmp2 = tmp;

	while (i <= mid && j <= right)
	{		
		if (tmp2[i].first <= tmp2[j].first)
			tmp[k] = tmp2[i++];
		else
			tmp[k] = tmp2[j++];
		k++;
	}
	while (i <= mid)
		tmp[k++] = tmp2[i++];
	while (j <= right)
		tmp[k++] = tmp2[j++];
}

void	merge_sort (std::vector<std::pair<int, int> >& tmp, int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		merge_sort(tmp, left, mid);
		merge_sort(tmp, mid + 1, right);
		merge(tmp, left, mid, right);
	}
}

template <typename T>
void 	merge_insertion_sort(T & v)
{
	T									pend;
	std::vector<std::pair<int, int> >	tmp;
	typedef typename T::iterator Iterator;

	Iterator it = v.begin();
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
	merge_sort(tmp, 0, tmp.size() - 1);
	v.clear();
	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (tmp[i].first != -1)
		{
			if (i == 0)
			{
				v.push_back(tmp[i].second);
				v.push_back(tmp[i].first);
			}
			else 
			{
				v.push_back(tmp[i].first);
				pend.push_back(tmp[i].second);
			}
		}
	}
	typename T::iterator it2 = pend.begin(); 
	typename T::iterator lower_it;
	for (; it2 != pend.end(); it2++)
		v.insert(std::lower_bound(v.begin(), v.end(), *it2), *it2);
	if (tmp.begin()->first == -1)
		v.insert(std::lower_bound(v.begin(), v.end(), tmp.begin()->second), tmp.begin()->second);
}

void    PmergeMe::sort_arr(char **av)
{
	try {
		parseData(av);
	}
	catch (const std::exception& e)
	{
		std::cout << "invalid arguments" << std::endl;
		exit(1);
	}
	std::cout << "Before : ";
	print_arr();
	std::cout << std::endl;
	clock_t t1 = clock();
	merge_insertion_sort(_v);
	clock_t t2 = clock();
	std::cout << "After : ";
	print_arr();
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _v.size()  << " elements with std::vector : " << (t2 - t1) * 1000000.0 / CLOCKS_PER_SEC << " us" << std::endl;
	t1 = clock();
	merge_insertion_sort(_deq);
	t2 = clock();
	std::cout << "Time to process a range of " << _deq.size()  << " elements with std::deque : " << (t2 - t1) * 1000000.0 / CLOCKS_PER_SEC << " us" << std::endl;
}

void    PmergeMe::print_arr()
{
	std::vector<int>::iterator it = _v.begin();
	for (; it != _v.end(); it++)
		std::cout << *it << " ";
}
