/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:43:52 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/21 15:15:39 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

int		ft_strlen(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*final;

	i = 0;
	j = 0;
	final = NULL;
	k = occurence(s1, set);
	final = malloc(sizeof(char) * (ft_strlen(s1) - k + 1));
	k = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
		j = 0;
		final[k] = s1[i];
		k++;
		i++;
	}
	final[k] = '\0';
	return (final);
}
