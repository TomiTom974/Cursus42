/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:40:33 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/21 14:40:35 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = malloc(siweof(char) * (len + 1));
	while (s && len > 0)
	{
		&str = &s;
		str++;
		s++;
		len--;
	}
	return (str);
}
