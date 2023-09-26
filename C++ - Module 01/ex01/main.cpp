/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:59:06 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/26 02:02:11 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    zombie = zombieHorde(5, "pipo");
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
    return (0);
}