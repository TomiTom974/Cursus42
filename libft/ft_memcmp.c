/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:21:35 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/27 17:55:53 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const void *tmp1;
	const void *tmp2;

	tmp1 = s1;
	tmp2 = s2;
	while (s1 && s2 && s1 == s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (s1 - s2);
}
