/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:26:01 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/27 17:53:22 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp;
	int			i;

	i = 0;
	if (s == NULL)
		return (NULL);
	tmp = s;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s);
		i++;
	}
	return ((char *)tmp);
}
