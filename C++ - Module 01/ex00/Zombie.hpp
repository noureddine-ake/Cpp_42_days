/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:19:29 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/26 01:28:17 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H__
# define ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif