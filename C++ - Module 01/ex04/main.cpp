/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:05:11 by nakebli           #+#    #+#             */
/*   Updated: 2023/10/04 17:49:14 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CopyFile.hpp"

int main (int ac, char **av)
{
	if (ac != 4) {
		std::cout   << "Syntax Error !" << std::endl;
	    return 1;
    }
	CopyFile        file_no;
	std::string     prvstring;
	std::fstream    file(av[1], std::ios::in);
	prvstring = av[1];
	file_no.setFileName(prvstring + ".replace", av[2], av[3]);
	file_no.create_file(av[1]);
}
