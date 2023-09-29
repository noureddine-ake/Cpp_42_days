# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 22:20:57 by nakebli           #+#    #+#              #
#    Updated: 2023/09/22 22:44:17 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

HERDERS = HumanA.hpp HumanB.hpp Weapon.hpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(HERDERS) $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
