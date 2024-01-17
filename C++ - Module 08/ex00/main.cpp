/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:44:42 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/17 22:51:35 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::cout << easyfind(v, 2) << std::endl;
    try
    {
        std::cout << easyfind(v, 4) << std::endl;
    }
    catch (...)
    {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}
