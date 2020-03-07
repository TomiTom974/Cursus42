/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:16:14 by tobarite          #+#    #+#             */
/*   Updated: 2020/03/07 16:48:59 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_printf_d(const char *str, t_aim p, int pos, va_list arg)
{
	char	*tmp;
	int		len;

	tmp = ft_itoa(va_arg(arg, int));
	if (p.less > p.more && p.more > ft_strlen(tmp))
	{
		while (p.less > p.more)
		{
			ft_putchar(' ');
			p.less--;
		}
	}
	while (p.more > ft_strlen(tmp))
	{
		ft_putchar('0');
		p.more--;
	}
	ft_putstr(tmp);
}
