/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:59:54 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/07 21:20:01 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal *j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();
    std::cout << wrong->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    std::cout << "---------------------" << std::endl;
    std::cout << wrong->getType() << " " << std::endl;
    wrong->makeSound();
    std::cout << "---------------------" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;
}
