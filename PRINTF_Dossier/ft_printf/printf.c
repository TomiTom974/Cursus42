/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:53:51 by tobarite          #+#    #+#             */
/*   Updated: 2021/03/11 15:48:58 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"



/*
 *                    [FONCTION DE LA LIBFT UTILES]
*/



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void    ft_putnbr(int nb)
{
        if (nb < 0)
        {
                ft_putchar('-');
                if (nb == -2147483648)
                {
                        ft_putchar('2');
                        nb = -147483648;
                }
                nb = nb * -1;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putchar(nb % 10 + '0');
        }
        if (nb < 10 && nb >= 0)
        {
                ft_putchar(nb % 10 + '0');
        }
}

int             ft_atoi(const char *str)
{
        int     res;
        int     neg;

        neg = 1;
        res = 0;
        while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
                        *str == '\v' || *str == '\f' || *str == '\r'))
                ++str;
        if (*str == '-')
                neg = -1;
        if (*str == '-' || *str == '+')
                ++str;
        while (*str && *str >= '0' && *str <= '9')
        {
                res = res * 10 + (*str - '0');
                ++str;
        }
        return (res * neg);
}



/*
 *                    [FONCTION DE GESTION DES FLAGS]
*/



void	ft_flag_c(va_list arg)
{
	ft_putchar((char)va_arg(arg, char*));
}

void	ft_flag_s(va_list arg)
{
	ft_putstr(va_arg(arg, char *));
}

void	ft_flag_d(const char *str, int i, va_list arg)
{
	int neg;


	if (str[i] == '-')
		neg = 1;
	else
		neg = 0;
	i++;
	
}



/*
 *                    [FONCTIONS DE REPARTITION DES FLAGS]
*/



char	ft_parse_flag(const char *str, int i)
{
	while (!(str[i] == 'c' || str[i] == 's' || str[i] == 'd'))
		i++;
	return (str[i]);
}

int		ft_post_flag(const char *str, int i, char c)
{
	while(str[i] != c)
		i++;
	return (i + 1);
}

int		ft_flag(const char *str, int i, va_list arg)
{
	char flag;

	flag = ft_parse_flag(str, i);
	if (!(flag == 'c' || flag == 's' || flag == 'd'))
		return (i);
	if (flag == 'c')
		ft_flag_c(arg);
	if (flag == 's')
		ft_flag_s(arg);
	if (flag == 'd')
		ft_flag_d(str, i, arg);
	return (ft_post_flag(str, i, flag));
}



/*
 *                    [FONCTION PRINTF MERE]
*/



int		ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;

	i = 0;
	va_start(arg, str);
	while(str[i])
	{
		if (str[i] == '%')
			i = ft_flag(str, i + 1, arg);
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return (i);
}
