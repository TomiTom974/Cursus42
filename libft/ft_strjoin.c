/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:26:30 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/21 14:29:05 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "includes/libft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	final = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	k = 0;
	while (s1)
	{
		final[i] = s1[i];
		i++;
	}
	while (s2)
	{
		final[i] = s2[k];
		i++;
		k++;
	}
	return (final);
}
