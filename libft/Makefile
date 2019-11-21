 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tobarite <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 14:44:09 by tobarite          #+#    #+#              #
#                                                     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(PATH)ft_atoi.c $(PATH)ft_bzero.c $(PATH)ft_isalnum.c $(PATH)ft_isalpha.c \
	$(PATH)ft_isascii.c $(PATH)ft_isdigit.c $(PATH)ft_isprint.c $(PATH)ft_memcpy.c \
	$(PATH)ft_memchr.c $(PATH)ft_memcmp.c $(PATH)ft_memccpy.c $(PATH)ft_memmove.c \
	$(PATH)ft_memset.c $(PATH)ft_strchr.c $(PATH)ft_strlcat.c $(PATH)ft_strlcpy.c \
	$(PATH)ft_strlen.c $(PATH)ft_strncmp.c $(PATH)ft_strnstr.c $(PATH)ft_tolower.c \
	$(PATH)ft_toupper.c $(PATH)ft_substr.c $(PATH)ft_strjoin.c $(PATH)ft_split.c \
	$(PATH)ft_strtrim.c

OBJ = $(subst .c,.o,$(SRC))

PATH = srcs/

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
