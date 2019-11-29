/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:43:52 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/27 16:42:15 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "includes/libft.h"

int		occurence(char const *s1, char const *s2)
{
	int i;
	int j;
	int oc;

	i = 0;
	j = 0;
	oc = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				oc++;
			j++;
		}
		i++;
	}
	return (oc);
}

int		check(char const c, char const *s1)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	char	*final;

	i = 0;
	final = NULL;
	k = occurence(s1, set);
	final = malloc(sizeof(char) * (ft_strlen((char const *)s1) - k + 1));
	k = 0;
	while (s1[i])
	{
		while (check(s1[i], set) == 1)
			i++;
		final[k] = s1[i];
		k++;
		i++;
	}
	final[k] = '\0';
	return (final);
}
