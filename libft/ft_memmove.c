/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:39:48 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/27 17:52:26 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*ok;
	const char	*source;

	source = src;
	i = 0;
	ok = dest;
	if (src == NULL)
		return (NULL);
	while (source[i] && n)
	{
		ok[i] = source[i];
		i++;
	}
	return (dest);
}
