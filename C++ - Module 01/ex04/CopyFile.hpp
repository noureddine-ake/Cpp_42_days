/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CopyFile.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:05:34 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/04 17:52:00 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPYFILE_HPP
# define COPYFILE_HPP

# include <iostream>
# include <fstream>

class CopyFile
{
    private:
        std::string fileName;
        std::string to_find;
        std::string to_replace;
    public:
        CopyFile();
        ~CopyFile();
        void            setFileName(std::string file, std::string to_find, std::string to_replace);
        std::string     getFileName();
        // void            printline(std::fstream file);
        void            create_file(std::string str);
};

#endif