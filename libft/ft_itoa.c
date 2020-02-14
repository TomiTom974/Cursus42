/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:49:40 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/20 00:02:03 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
