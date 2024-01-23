/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:35 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 05:32:49 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
    private:
        std::vector<int>    _v;
        std::deque<int>     _d;
    public:
        PmergeMe() {};
        ~PmergeMe() {};

        std::vector<int>    getVector() const;
        std::deque<int>     getDeque() const;
};

template <typename T>
void    parseData(char **av, T & _a);

template <typename T>
void    sort_arr(T & v, char **av);

template <typename T>
void    print_arr(T& v);