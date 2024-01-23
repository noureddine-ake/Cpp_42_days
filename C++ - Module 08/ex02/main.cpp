/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:21:34 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 02:37:35 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(-17);
    std::cout << "mstack.top() : " << mstack.top() << std::endl;
    mstack.mpop();
    mstack.mpop();
    mstack.mpop();
    std::cout << "mstack.size() : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(-3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator itb = mstack.begin();
    std::cout << "itb" << *itb << std::endl;
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "ite" << *ite << std::endl;
    ++itb;
    --itb;
    std::cout << "-------mstack------" << std::endl;
    while (itb != ite)
    {
        std::cout << *itb << std::endl;
        ++itb;
    }
    std::stack<int> s(mstack);
    return 0;
}