/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:26:01 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/21 14:26:16 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *tmp;

	if (s == NULL)
		return (NULL);
	tmp = s;
	while (++s)
	{
		if (&s == c)
			tmp = s;
	}
	return (tmp);
}
