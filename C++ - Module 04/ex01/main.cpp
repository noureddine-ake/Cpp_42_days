/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:59:54 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/08 17:50:47 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void showLeaks()
{
    system("leaks Polymorphism");
}

int main()
{
    const Animal* meta[10];
    
    std::cout << "-------------------" << std::endl;
    int i = 0;
    while (i < 5)
    {
        meta[i] = new Dog();
        i++;
    }
    std::cout << "-------------------" << std::endl;
    while (i < 10)
    {
        meta[i] = new Cat();
        i++;
    }
    std::cout << "-------------------" << std::endl;
    i = 0;
    while (i < 10)
    {
        meta[i]->makeSound();
        i++;
    }
    std::cout << "-------------------" << std::endl;
    i = 0;
    while (i < 10)
    {
        delete meta[i];
        i++;
    }
    // const Animal* j = new Dog();
    // delete j;   //should not create a leak
    // const Animal* i = new Cat();
    // delete i;
    // atexit(showLeaks);
    return 0;
}
