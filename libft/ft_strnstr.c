/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:37:07 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/27 16:49:41 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (little == NULL)
		return ((char *)big);
	while (i != (int)len && big[i])
	{
		if (big[i] == little[i])
			while (big[i + k] == little[i + k])
			{
				if (little[i + k + 1] == '\0')
					return ((char *)big);
				k++;
			}
		i++;
	}
	return (0);
}
