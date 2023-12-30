# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 18:00:14 by yamajid           #+#    #+#              #
#    Updated: 2023/12/28 20:43:57 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	harl
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	main.cpp 

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(Run) $(FLAGS) -o $(NAME) $(OBJS)

%.o:  %.cpp Harl.hpp
	$(Run) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all