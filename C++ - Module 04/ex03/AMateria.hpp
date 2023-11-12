/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:53:43 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/12 13:02:06 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string		_type;
        unsigned int	_xp;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & src);
        virtual ~AMateria();

        AMateria &	operator=(AMateria const & rhs);

        std::string const &	getType(void) const;
        unsigned int		getXP(void) const;

        virtual AMateria*	clone(void) const = 0;
        virtual void		use(ICharacter& target);
};

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & src);
        Ice &	operator=(Ice const & rhs);
        ~Ice();

        virtual AMateria*	clone(void) const ;
        virtual void		use(ICharacter& target);
};

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & src);
        Cure &	operator=(Cure const & rhs);
        ~Cure();

        virtual AMateria*	clone(void) const;
        virtual void		use(ICharacter& target);
};

#endif