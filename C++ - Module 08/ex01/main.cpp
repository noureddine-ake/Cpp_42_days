/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:57:21 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 02:51:32 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    
    // -------------------------Spane 1 (size 10) ------------------------------


    Span sp = Span(10);
    
    sp.addNumber(99);
    sp.addNumber(14);
    sp.addNumber(2);
    
    sp.fillArr();
    sp.printArr();

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    
    // -------------------------Spane 2 (size 1) ------------------------------

    
    Span sp2 = Span(1);

    sp2.addNumber(5);
    sp2.printArr();
    try
    {
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
