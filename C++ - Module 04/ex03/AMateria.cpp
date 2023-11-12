/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:02:44 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/12 13:07:00 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    _type = "AMateria";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria::~AMateria()
{
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
    if (this != &rhs)
        this->_type = rhs.getType();
    return (*this);
}

std::string const &	AMateria::getType(void) const
{
    return (this->_type);
}

unsigned int		AMateria::getXP(void) const
{
    return (this->_xp);
}

void	AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
    // std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice()
{
    // std::cout << "Ice Destructor called" << std::endl;
}

Ice &	Ice::operator=(Ice const & rhs)
{
    // std::cout << "Ice Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return (*this);
}

AMateria*	Ice::clone(void) const
{
    return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->_xp += 10;
}


Cure::Cure() : AMateria("cure")
{
    // std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
    // std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::~Cure()
{
    // std::cout << "Cure Destructor called" << std::endl;
}

Cure &	Cure::operator=(Cure const & rhs)
{
    // std::cout << "Cure Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return (*this);
}

AMateria*	Cure::clone(void) const
{
    return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    this->_xp += 10;
}