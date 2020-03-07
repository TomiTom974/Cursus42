/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:28:35 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/17 01:43:00 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char const *dest, char const *src, size_t size)
{
	unsigned int	i;
	char			*sc;
	char			*dst;

	dst = (char *)dest;
	sc = (char *)src;
	i = 0;
	if (dst == NULL || sc == NULL)
		return (0);
	if (size > 0)
	{
		while (sc[i] != '\0' && i < (size - 1))
		{
			dst[i] = sc[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(sc));
}
