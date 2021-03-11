# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tobarite <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 15:51:55 by tobarite          #+#    #+#              #
#    Updated: 2021/03/02 16:38:41 by tobarite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = gcc

INCLUDE = -I./includes

FLAGS = -Wall -Wextra -Werror -Weverything -Wpedantic

OBJ = $(SRCS:.c=.o)

SRCS = printf.c\
	   sources/*.c

all:
	${NAME}

${NAME}:
		$(OBJ)
		$(MAKE) -C ./libft
		cp ./libft/libft.a $(NAME)
		$(CC) $(FLAGS) $(INCLUDE) $(SRCS)
		ar -rcs $(NAME) $(OBJ)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJ)


fclean:
	clean
	$(make) fclean -C ./libft
	rm -rf $(NAME)

re:
	fclean
	all

.PHONY: all clean fclean re
