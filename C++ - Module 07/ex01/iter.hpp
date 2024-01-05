/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 00:07:06 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/23 04:28:29 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void	iter(T *array, size_t size, void (*f)(T const &))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

template <typename T>

void	print(T const &x)
{
    std::cout << x << std::endl;
}

#endif