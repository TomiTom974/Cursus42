# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tobarite <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 20:20:19 by tobarite          #+#    #+#              #
#    Updated: 2020/03/03 18:06:16 by tobarite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

DIR_I =		includes/

FILE_C =	ft_printf.c 
			ft_printf_c.c
			ft_printf_s.c
			ft_printf_p.c
			ft_printf_d.c
			ft_printf_i.c
			ft_printf_u.c
			ft_printf_x.c
			ft_printf_X.c
			ft_printf_perc.c
FILE_O =	$(FILE_C:%.c=%.o)

FLAGS =		-Wall -Wextra -Werror

PRINTF_H =	-I includes/*.h

all:		$(NAME) 

$(NAME):
			gcc $(FLAGS) -o $(PRINTF_H) $(FILE_C)
			ar rc $(NAME) $(FILE_O)
			ranlib $(NAME)

re:			all fclean

clean:
			rm $(FILE_O)

fclean: 	clean
			rm $(NAME)

.PHONY all re clean fclean
