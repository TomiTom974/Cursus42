/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:32:00 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/27 17:55:25 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	i = 0;
	s = src;
	if (s == NULL)
		return (NULL);
	d = dest;
	while (s[i] && s[i] != c && n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
