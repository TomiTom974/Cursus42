/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:16:16 by tobarite          #+#    #+#             */
/*   Updated: 2019/10/09 14:27:39 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*hum;

	i = 0;
	if (src == NULL)
		return (NULL);
	hum = dest;
	while (n && src[i])
	{
		hum[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
