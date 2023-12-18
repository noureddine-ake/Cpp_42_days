/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:02:31 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/18 22:13:41 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <ctime>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

class Serializer
{
    private:
        Serializer(void) {};
    public:
        Serializer(Serializer const &src);
        Serializer &operator=(Serializer const &src);
        static uintptr_t serialize(Data *data);
        static Data *deserialize(uintptr_t raw);
        ~Serializer(void) {};
};

std::ostream& operator<<(std::ostream& out, const Data& bc);

#endif