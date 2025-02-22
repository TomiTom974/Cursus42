/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:16:13 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/13 17:22:47 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*hey;

	if (!(hey = malloc((unsigned long)(nmemb * size))))
		return (0);
	ft_memset(hey, 0, (unsigned long)(nmemb * size));
	return (hey);
}
