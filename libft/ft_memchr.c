/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:43:02 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/29 15:38:45 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*go;

	go = s;
	while (n)
	{
		if ((int)go == c)
			break ;
		go++;
		n--;
	}
	return ((void *)go);
}
