/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:21:27 by tobarite          #+#    #+#             */
/*   Updated: 2019/10/09 14:21:44 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int tot;

	i = 0;
	tot = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\v' ||
		str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tot = (tot * 10) + str[i] - '0';
		i++;
	}
	return (tot * neg);
}
