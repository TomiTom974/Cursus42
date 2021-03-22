/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:53:51 by tobarite          #+#    #+#             */
/*   Updated: 2021/03/22 17:19:07 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
**                    [FONCTION DE LA LIBFT UTILES]
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

int		ft_atoi(const char *str)
{
	int		res;
	int		neg;

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

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;

	i = 0;
	while (i < (int)ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[(int)ft_strlen(str) - i - 1];
		str[(int)ft_strlen(str) - i - 1] = tmp;
		i++;
	}
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	char	*src;

	src = (char *)s1;
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	size_t	i;
	char	*tot;
	int		sign;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (!(tot = (char *)malloc(sizeof(char) * 12)))
		return (0);
	if (n < 0)
		sign = 1;
	else
		sign = 0;
	while (n != 0)
	{
		tot[i++] = (sign) ? (-1 * (n % 10)) + '0' : (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		tot[i++] = '-';
	tot[i] = '\0';
	return (ft_strrev(tot));
}

/*
**                    [FONCTION DE GESTION DES FLAGS]
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
	int	neg;
	int	space;

	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else
		neg = 0;
	space = ft_atoi(&str[i]);
	if (neg == 1)
	{
		ft_putnbr(va_arg(arg, int));
		while (space-- != 0)
			ft_putchar(' ');
	}
	else
	{
		while (space-- != 0)
			ft_putchar(' ');
		ft_putnbr(va_arg(arg, int));
	}
}

/*
**                    [FONCTIONS DE REPARTITION DES FLAGS]
*/

char	ft_parse_flag(const char *str, int i)
{
	while (!(str[i] == 'c' || str[i] == 's' || str[i] == 'd'))
		i++;
	return (str[i]);
}

int		ft_post_flag(const char *str, int i, char c)
{
	while (str[i] != c)
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
**                    [FONCTION PRINTF MERE]
*/

int		ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;

	i = 0;
	va_start(arg, str);
	while (str[i])
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
