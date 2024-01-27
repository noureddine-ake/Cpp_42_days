/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:35 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/27 13:13:28 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
	private:
		std::vector<int>    _v;
		std::deque<int>     _deq;
	public:
		PmergeMe() {};
		~PmergeMe() {};

		void				parseData(char **av);
		void				sort_arr(char **av);
		void				print_arr();
};
