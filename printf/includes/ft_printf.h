/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:59:47 by tobarite          #+#    #+#             */
/*   Updated: 2020/03/07 15:43:09 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "../libft/libft.h"
# include "struct.h"

/*
**		[FONCTION DE BASE FT_PRINTF]
*/

int				ft_printf(const char *str, ...);

/*
**		[FONCTION ADICTIONELS DE FT_PRINTF]
*/

int				ft_parse(const char *str, int pos, va_list arg);
int				ft_check(char c);
t_aim			ft_preflag(const char *str, int pos);

void			ft_printf_d(const char *str, t_aim p, int pos, va_list arg);

/*
**		[FONCTION DE LA LIBFT UTILES]
*/

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
char			*ft_itoa(int n);
size_t			ft_strlen(const char *s);

#endif
