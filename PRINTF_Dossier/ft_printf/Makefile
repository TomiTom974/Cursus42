# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tobarite <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 15:51:55 by tobarite          #+#    #+#              #
#    Updated: 2021/03/22 17:00:28 by tobarite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror -Weverything -Wpedantic

OBJ = $(SRCS:.c=.o)

SRCS = printf.c



all: ${NAME}


${NAME}: $(OBJ)
		 $(CC) -c $(FLAGS) $(SRCS)
		 ar -rcs $(NAME) $(OBJ)


clean:
	rm -rf $(OBJ)


fclean: clean
	rm -rf $(NAME)


re: fclean
	make 



.PHONY: all clean fclean re
