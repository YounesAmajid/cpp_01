# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 21:24:21 by yamajid           #+#    #+#              #
#    Updated: 2024/01/04 13:37:13 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	zombie
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	Zombie.cpp main.cpp zombieHorde.cpp 

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(Run) $(FLAGS) -o $(NAME) $(OBJS)

%.o:  %.cpp Zombie.hpp
	$(Run) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all