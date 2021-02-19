/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:30:08 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/19 14:31:03 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		k;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	if (!(final = malloc(sizeof(char) * (ft_strlen(s1) + \
				ft_strlen(s2) + 1))))
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

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	char	*src;

	src = (char *)s1;
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
