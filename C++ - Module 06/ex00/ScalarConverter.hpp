/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:49:19 by nakebli           #+#    #+#             */
/*   Updated: 2023/12/17 21:48:53 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <limits>
# include <cmath>

class ScalarConverter
{
    private :
        ScalarConverter(void){};
    public :
        static void convert(std::string str);
        ~ScalarConverter(void){};
};

#endif