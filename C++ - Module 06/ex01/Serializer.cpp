/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:59:26 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/18 22:23:07 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(Serializer const &src)
{
    *this = src;
}

Serializer &Serializer::operator=(Serializer const &src)
{
    if (this != &src)
    {
        *this = src;
    }
    return (*this);
}

uintptr_t Serializer::serialize(Data *data)
{
    return (reinterpret_cast<uintptr_t>(data));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

Data operator<<(Data &data, std::string s1)
{
    data.s1 = s1;
    return (data);
}

std::ostream& operator<<(std::ostream& out, const Data& data)
{
    out << data.s1 << std::endl;
    out << data.n << std::endl;
    out << data.s2 << std::endl;
    return (out);
}
