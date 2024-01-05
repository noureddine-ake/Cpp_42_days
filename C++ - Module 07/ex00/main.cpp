/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:48:20 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/23 04:58:46 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

std::ostream& operator<<(std::ostream& out, const data& data)
{
    out << data.a << ", " << data.b << ", " << data.c << std::endl;
    return (out);
}

int main(void)
{
    std::cout << "-------------------------INT----------------------" << std::endl;
    int t = 2;
    int s = 3;
    std::cout << "g = " << t << "h = " << s << std::endl;
    ::swap(t, s);
    std::cout << "t = " << t << "s = " << s << std::endl;
    std::cout << "min(t, s) = " << min(t, s) << std::endl;
    std::cout << "max(t, s) = " << max(t, s) << std::endl;

    std::cout << "-------------------------STRING-------------------------" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << "d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << "d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    std::cout << std::endl;

    std::cout << "-------------------------FLOAT-------------------------" << std::endl;
    float e = 2.5;
    float f = 3.5;
    std::cout << "e = " << e << "f = " << f << std::endl;
    ::swap(e, f);
    std::cout << "e = " << e << "f = " << f << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
    std::cout << std::endl;

    std::cout << "-------------------------DOUBLE----------------------" << std::endl;
    double g = 2.5;
    double h = 3.5;
    std::cout << "g = " << g << "h = " << h << std::endl;
    ::swap(g, h);
    std::cout << "g = " << g << "h = " << h << std::endl;
    std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
    std::cout << "max(g, h) = " << ::max(g, h) << std::endl;

    std::cout << "-------------------------OTHER TYPE-------------------------" << std::endl;
    data a(2, 2.5f, 'a');
    data b(3, 3.5f, 'b');
    
    std::cout << "a = " << a << "b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << "b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::cout << std::endl;

    return (0);
}
