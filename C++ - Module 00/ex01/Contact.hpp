/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:02:28 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/22 22:26:59 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		int         index;
		std::string phone_number;
		std::string f_name;
		std::string l_name;
		std::string nickname;
		std::string d_secret;
	public:
		Contact();
        ~Contact();
		std::string get_f_name();
		std::string get_l_name();
		std::string get_nickname();
		std::string get_d_secret();
		std::string	get_phone_number();
		int get_index();
		void set_f_name(std::string f_name);
		void set_l_name(std::string l_name);
		void set_nickname(std::string nickname);
		void set_index(int index);
		void set_phone_number(std::string phone_number);
		void set_d_secret(std::string d_secret);
};


# endif