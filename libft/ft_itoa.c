/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:49:40 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/21 16:26:33 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include "stdlib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev(char *str)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[ft_strlen(str) - 1 - i];
		str[ft_strlen(str) - 1 - i] = tmp;
		i++;
	}
	return (str);
}

int		mal(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 10)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	str = NULL;
	i = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	if (n == -2147483648)
		return ("-2147483648");
	str = malloc(sizeof(char) * (mal(n) + 1));
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = (n - (n % 10)) / 10;
		i++;
	}
	if (neg == 1)
		str[i] = '-';
	str[i + 1] = '\0';
	return (rev(str));
}
