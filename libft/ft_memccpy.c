/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:32:00 by tobarite          #+#    #+#             */
/*   Updated: 2019/10/09 14:35:34 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	char	*hum;

	i = 0;
	if (src == NULL)
		return (NULL);
	hum = dest;
	while (src[i] && src[i] != c && n)
	{
		hum[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
