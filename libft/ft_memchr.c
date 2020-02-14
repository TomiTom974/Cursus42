/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:43:02 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/13 17:24:52 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*go;
	size_t		i;

	i = 0;
	go = (const char *)s;
	while (i < n)
	{
		if (go[i] == (const char)c)
			return (void *)&go[i];
		i++;
	}
	return (NULL);
}
