/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:29:27 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/17 01:40:09 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char const *dest, char const *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;
	char			*dst;
	char			*sc;

	i = ft_strlen(dest);
	res = ft_strlen(src);
	dst = (char *)dest;
	sc = (char *)src;
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (sc[j] != '\0' && i + 1 < size)
	{
		dst[i] = sc[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
