/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:53:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/24 14:51:34 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span {
    private:
        unsigned int    _n;
        unsigned int    _size;
        int             *_arr;
        Span() {};
    public:
        Span(unsigned int n);
        Span(Span const & src);
        ~Span();

        Span & operator=(Span const & src);

        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();
};

#endif