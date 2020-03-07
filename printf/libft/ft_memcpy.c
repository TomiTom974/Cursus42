/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:16:16 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/13 17:26:30 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)dest;
	str2 = (char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*str1++ = *str2++;
	return (dest);
}
