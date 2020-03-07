/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:39:48 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/13 17:25:16 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ok;
	const char	*source;

	source = src;
	ok = dest;
	i = 0;
	ok = dest;
	if (source < ok)
		while (n--)
			*(ok + n) = *(char *)(source + n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
