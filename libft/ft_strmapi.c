/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:08:46 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/18 23:52:36 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*final;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	if (!(final = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	ft_strcpy(final, s);
	while (final[i])
	{
		final[i] = (*f)(i, final[i]);
		i++;
	}
	return (final);
}
