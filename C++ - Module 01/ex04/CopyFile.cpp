/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CopyFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:14:48 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/03 01:52:28 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CopyFile.hpp"

CopyFile::CopyFile()
{
    return ;
}

CopyFile::~CopyFile()
{
    return ;
}

void    CopyFile::setFileName(std::string file, std::string to_find, std::string to_replace)
{
    this->fileName = file;
    this->to_find = to_find;
    this->to_replace = to_replace;
}

std::string CopyFile::getFileName()
{
    return (this->fileName);
}

// void    CopyFile::printline(std::fstream file)
// {
//     std::cout   << this->fileName << std::endl;
// }

void    CopyFile::create_file(std::string str)
{
    std::cout   << this->fileName << std::endl;
    std::ofstream    file(this->fileName);
    if (file.is_open())
    {
        std::string line;
        std::ifstream inputFile(str);
        if (inputFile.is_open())
        {
            while (std::getline(inputFile, line))
            {
                std::size_t  index = 0;
                while (1)
                {
                    index = line.find(this->to_find, index);
                    if (index == std::string::npos)
                        break ;
                    line.erase(index, this->to_find.length());
                    line.insert(index, this->to_replace);
                    index += this->to_replace.length();
                }
                file  << line << std::endl;
            }
        }
        else
        {
            std::cout << "Unable to open the file" << std::endl;
            exit(1);
        }
    }
    else
    {
        std::cout << "Unable to open the file" << std::endl;
        exit(1);
    }
}