# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 22:20:57 by nakebli           #+#    #+#              #
#    Updated: 2023/10/04 18:38:47 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

SRCS = main.cpp CopyFile.cpp

HERDERS = CopyFile.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(HERDERS) $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
