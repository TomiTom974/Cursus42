/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:39:48 by tobarite          #+#    #+#             */
/*   Updated: 2019/10/09 14:42:41 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*tmp;
	char	*ok;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	i = 0;
	ok = dest;
	while (tmp[i])
	{
		ok[i] = tmp[i];
		i++;
	}
	return (dest);
}
