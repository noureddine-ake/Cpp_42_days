/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 03:43:40 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/22 02:36:23 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void) : std::stack<T>() {}
        MutantStack(MutantStack const & src) : std::stack<T>(src) {}
        ~MutantStack(void) {}

        MutantStack &	operator=(MutantStack const & rhs)
        {
            if (this != &rhs)
                std::stack<T>::operator=(rhs);
            return (*this);
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator	        begin(void) { return (std::stack<T>::c.begin()); }
        iterator	        end(void) { return (std::stack<T>::c.end()); }
        void	            mpop(void) {
            if (std::stack<T>::empty())
                throw std::exception();
            return (this->pop());
        }
};

#endif