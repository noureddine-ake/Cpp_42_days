/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:16:16 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/12 13:03:13 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter();
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
    private:
        std::string		_name;
        AMateria*		_inventory[4];

    public:
        Character();
        Character(std::string const & name);
        Character(Character const & src);
        ~Character();

        Character &	operator=(Character const & rhs);

        std::string const &	getName(void) const;
        void				use(int idx, ICharacter& target);
        void				equip(AMateria* m);
        void				unequip(int idx);
};

#endif
