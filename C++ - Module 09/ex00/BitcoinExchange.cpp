/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:58:18 by nakebli           #+#    #+#             */
/*   Updated: 2024/01/19 15:52:16 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::string     line;
    std::fstream file("data.csv");
    if (!file.is_open())
    {
        std::cout << "Error: file not found." << std::endl;
        return ;
    }
    getline(file, line);
    while (getline(file, line))
    {
        std::string currency = line.substr(0, line.find(','));
        double value = std::stod(line.substr(line.find(',') + 1));
        this->_bitcoin[currency] = value;
    }
    _itb = _bitcoin.begin();
    _ite = _bitcoin.end();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
    *this = src;
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
    if (this != &rhs)
        this->_bitcoin = rhs._bitcoin;
    return (*this);
}



float convertToFloat(const std::string& str)
{
    std::istringstream iss(str);
    float result;
    
    if (!(iss >> result)) {
        throw std::exception();
        result = 0.0;
    }
    
    return result;
}

bool isValidDate(const std::string& dateStr)
{
    if (dateStr.length() != 10)
        return false;

    int year = atoi(dateStr.substr(0, 4).c_str());
    int month = atoi(dateStr.substr(5, 2).c_str());
    int day = atoi(dateStr.substr(8, 2).c_str());

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (day > 29)
                return false;
        }
        else
        {
            if (day > 28)
                return false;
        }
    }

    return true;
}

void    BitcoinExchange::parse_date(std::string line)
{
    int counthyphen = 0;
    int count = 0;

    std::string::iterator it = line.begin();
    while (*it != ' ' && *it != '\0')
    {
        if (*it == '-')
        {
            if (count != 4 && count != 7)
                throw std::exception();
            counthyphen++;
            if (*(it + 1) == '-')
                throw std::exception();
        }
        if (counthyphen > 2)
            throw std::exception();
        if (std::isdigit(*it) == false && *it != '-')
            throw std::exception();
        it++;
        count++;
    }
    if (counthyphen == 0 || count != 10)
        throw std::exception();
}

void    BitcoinExchange::parse_value(std::string line)
{
    std::string::iterator it = line.begin();
    int countdot = 0;
    
    if (*it == '-')
        it++;
    while (*it != '\0')
    {
        if (*it == '.')
        {
            countdot++;
            if (countdot > 1)
                throw std::exception();
        }
        if (std::isdigit(*it) == false && *it != '.')
            throw std::exception();
        it++;
    }

}

void    BitcoinExchange::print(std::string filename)
{
    std::fstream file(filename);
    if (!file.is_open())
    {
        std::cout << "Error: file not found." << std::endl;
        return ;
    }
    std::string line;
    getline(file, line);
    if (line != "date | value")
    {
        std::cout << "Error: file is not in the correct format." << std::endl;
        return ;
    }
    while (getline(file, line))
    {
        // parse date
        size_t i;
        try
        {
            i = line.find(" | ");
            if (i != 10)
                throw std::exception();
            parse_date(line);
            if (isValidDate(line.substr(0, i)) == false)
                throw std::exception();
        }
        catch(const std::exception& e)
        {
            std::cout << "Error: Incorrect Date." << std::endl;
            continue ;
        }

        // parse value
        try
        {
            parse_value(line.substr(i + 3));
        }
        catch(const std::exception& e)
        {
            std::cout << "Error: Incorrect Value." << std::endl;
            continue ;
        }
        
        std::string currency = line.substr(0, line.find(" | "));
        double value;
        try
        {
            value = convertToFloat(line.substr(line.find(" | ") + 3));
        }
        catch(const std::exception& e)
        {
            std::cout << "Error: Value Incorrect." << std::endl;
            continue ;
        }


        if (value >= 0 && value <= 1000)
        {
            std::map<std::string, double>::iterator ite = _bitcoin.lower_bound(currency);
            if (ite->first != currency)
                ite--;
            if (currency < "2009-01-02")
            {
                std::cout << "choose a date above 2009-01-01" << std::endl;
                continue ;
            }
            std::cout << currency << " => " << value << " = " << value * ite->second << std::endl;
        }
        else if (value > 1000)
            std::cout << "Error: too large a number."   << std::endl;
        else
            std::cout << "Error: not a positive number." << std::endl;
    }
}