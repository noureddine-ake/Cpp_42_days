/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 02:49:43 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    private:
        unsigned int        _n;
        unsigned int        _size;
        std::vector<int>    _arr;
        Span() {};
    public:
        Span(unsigned int n);
        Span(Span const & src);
        ~Span();

        Span & operator=(Span const & src);

        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();
        void    fillArr();
        void    printArr();
};

#endif