/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:32:35 by nakebli           #+#    #+#             */
/*   Updated: 2023/09/20 14:52:55 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Megaphone
{
    private:
        std::string		_str;
    public:
        void		To_upper(void)
        {
            int		i;

            i = 0;
            while (this->_str[i])
            {
                this->_str[i] = toupper(this->_str[i]);
                i++;
            }
        }
        void        Print(void)
        {
            std::cout << this->_str;
        }
        void    set_str(std::string str)
        {
            this->_str = str;
        }
};

int main (int ac, char **av)
{
    Megaphone   tst;
    int         i;
    
    (void)ac;
    i = 1;
    while (av[i])
    {
        tst.set_str((std::string)av[i]);
        tst.To_upper();
        tst.Print();
        i++;
    }
    std::cout << std::endl;
}