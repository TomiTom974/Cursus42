/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:08:15 by tobarite          #+#    #+#             */
/*   Updated: 2019/10/09 14:27:24 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*hum;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	hum = s;
	while (n)
	{
		hum[i] = c;
		i++;
		n--;
	}
	return (s);
}
