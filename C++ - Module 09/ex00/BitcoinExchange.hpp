/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:55:48 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/19 15:39:46 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
    public:
        std::map<std::string, double> _bitcoin;
        std::map<std::string, double>::iterator _itb;
        std::map<std::string, double>::iterator _ite;

        BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const & src);
        ~BitcoinExchange(void);
        BitcoinExchange &	operator=(BitcoinExchange const & rhs);
        void    print(std::string filename);
        void    parse_date(std::string line);
        void    parse_value(std::string line);
};

#endif