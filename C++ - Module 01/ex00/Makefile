# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 01:40:33 by nakebli           #+#    #+#              #
#    Updated: 2023/09/26 01:44:21 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HERDERS = Zombie.hpp

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