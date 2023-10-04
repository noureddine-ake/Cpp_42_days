/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:47:59 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/04 17:28:11 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " is dead" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
