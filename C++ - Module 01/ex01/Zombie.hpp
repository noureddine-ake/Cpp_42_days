/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:47:19 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/26 02:12:30 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H__
# define ZOMBIE_H__

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        Zombie(void);
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif