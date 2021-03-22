/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:18:27 by tobarite          #+#    #+#             */
/*   Updated: 2021/03/22 15:37:44 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"
# include "stddef.h"
# include "stdarg.h"

/*
**              [FONCTION FT_PRINTF DE BASE]
*/

int		ft_printf(const char *str, ...);

/*
**              [FONCTIONS ADDITIONELLES PRINTF]
*/

int		ft_flag(const char *str, int i, va_list arg);
char	ft_parse_flag(const char *str, int i);
int		ft_post_flag(const char *str, int i, char c);
void	ft_flag_c(va_list arg);
void	ft_flag_s(va_list arg);
void	ft_flag_d(const char *str, int i, va_list arg);

/*
**              [FONCTION DE LA LIBFT UTILES]
*/

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(const char *str);

#endif
