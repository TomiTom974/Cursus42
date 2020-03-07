/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:26:30 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/18 23:51:32 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	if (!(final = malloc(sizeof(char) * (ft_strlen((char const *)s1) + \
				ft_strlen((char const *)s2) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		final[i] = s2[k];
		i++;
		k++;
	}
	final[i] = '\0';
	return (final);
}
