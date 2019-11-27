/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:40:33 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/27 16:47:26 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const *str;

	str = malloc(sizeof(char) * (len + 1));
	s = s + start;
	while (s && len > 0)
	{
		str = s;
		str++;
		s++;
		len--;
	}
	return ((char *)str);
}
