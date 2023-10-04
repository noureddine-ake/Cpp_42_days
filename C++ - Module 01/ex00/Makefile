# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 01:40:33 by nakebli           #+#    #+#              #
#    Updated: 2023/10/04 18:52:48 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HERDERS = Zombie.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

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

re: fclean all

.PHONY: all clean fclean re
