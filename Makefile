# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 23:22:08 by yamajid           #+#    #+#              #
#    Updated: 2023/12/26 21:04:10 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

Clang = c++

Flags = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = newZombie.cpp randomChump.cpp Zombie.cpp

all = $(NAME)

OBJS = $(SRC:.cpp=.o)

$(NAME) : $(OBJS) 
	$(Clang) $(Flags) $(OBJS)-o $(NAME)
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)
re: fclean all