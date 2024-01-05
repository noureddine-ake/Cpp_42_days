/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:48:23 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/23 04:57:25 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
    T	tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T		min(T const &a, T const &b)
{
    return (a < b ? a : b);
}

template <typename T>
T		max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

class  data {
    public :
        int     a;
        float   b;
        char    c;
    
    data(void) : a(0), b(0), c(0) {};
    data(int a, float b, char c) : a(a), b(b), c(c) {};
    ~data(void) {};
    bool    operator<(data const &rhs) const { return (this->a < rhs.a); };
    bool    operator>(data const &rhs) const { return (this->a > rhs.a); };
};

#endif