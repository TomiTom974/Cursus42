/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:17:16 by tobarite          #+#    #+#             */
/*   Updated: 2020/03/07 16:31:52 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int				check(char c)
{
	char *tmp;
	int i;

	tmp = "cspdiuxX%";
	i = 0;
	while (tmp[i])
	{
		if (c == tmp[i])
			return (1);
		i++;
	}
	return(0);
}

t_aim	ft_preflag(const char *str, int pos)
{
	char	*tmp;
	t_aim	p;
	int i;

	i = 0;
	while (str[pos] == '0' || str[pos] == '-')
		pos++;
	while (str[pos] != '.' && (str[pos] >= '0' && str[pos] <= '9'))
	{
		tmp[i] = str[pos];
		pos++;
		i++;
	}
	p.less = ft_atoi((const char *)tmp);
	printf("\nvaleur de less = %d\n", p.less);
	i = 0;
	while (!(check(str[pos])) && (str[pos] >= '0' && str[pos] <= '9'))
	{
		tmp[i] = str[pos];
		pos++;
		i++;
	}
	p.more = ft_atoi((const char *)tmp);
	printf("valeur de more = %d\n", p.more);
	return (p);
}

int				ft_parse(const char *str, int pos, va_list arg)
{
	t_aim	p;

	pos++;
	p = ft_preflag(str, pos);
	while (check(str[pos]) != 1)
		pos++;
	if (str[pos] == 'd')
	{
		ft_printf_d(str, p, pos, arg);
	}
	else if (str[pos] == 'c')
		ft_putchar(va_arg(arg, int));
	else if (str[pos] == 's')
		ft_putstr(va_arg(arg, char *));
	return (pos);
}

int				ft_printf(const char *str, ...)
{
	va_list			arg;
	int				i;

	i = -1;
	va_start(arg, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			i = ft_parse(str, i, arg);
		}
		else
			ft_putchar(str[i]);
	}
	return (i);
}
