# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 15:39:34 by kgeorgia          #+#    #+#              #
#    Updated: 2021/10/05 15:19:06 by kgeorgia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			bsp

CC =			clang++

FLAGS =			-Wall -Wextra -Werror -g

RM =			rm -rf

SRC =			bsp.cpp		Fixed.cpp		Point.cpp		main.cpp

HDR =			Fixed.hpp		Point.hpp

OBJS =			$(SRC:.cpp=.o)

all:			$(NAME)

$(NAME) :		$(OBJS) Makefile
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "Compiled "$(NAME)" successfully!"

%.o:%.cpp $(HDR)
				@$(CC) $(FLAGS) -c $< -o $@
				@echo "Compiled "$<" successfully!"

norme:
				norminette $(DIR_SRCS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re, bonus