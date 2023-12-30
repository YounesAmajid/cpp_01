# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 11:11:28 by yamajid           #+#    #+#              #
#    Updated: 2023/12/27 11:11:47 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	zombie
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	main.cpp 

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(Run) $(FLAGS) -o $(NAME) $(OBJS)

%.o:  %.cpp Zombie.h
	$(Run) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all