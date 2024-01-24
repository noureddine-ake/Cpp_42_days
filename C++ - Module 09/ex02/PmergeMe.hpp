/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:24:35 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/24 01:29:58 by nakebli          ###   ########.fr       */
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
    public:
        PmergeMe() {};
        ~PmergeMe() {};

        std::vector<int>    getVector() const;
        void    parseData(char **av, std::vector<int> & _a);
        void    sort_arr(std::vector<int> & v, char **av);
        void    print_arr(std::vector<int> & v);
};
