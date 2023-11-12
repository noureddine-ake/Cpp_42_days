/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:30:19 by nakebli           #+#    #+#             */
/*   Updated: 2023/11/08 17:32:25 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
        virtual ~Brain();
};

#endif