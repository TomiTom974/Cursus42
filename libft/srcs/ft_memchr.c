/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:43:02 by tobarite          #+#    #+#             */
/*   Updated: 2019/10/09 14:49:53 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	void	*go;

	if (s == NULL)
		return (NULL);
	go = s;
	while (n)
	{
		if (go == c)
			return (go);
		go++;
		n--;
	}
	return (NULL);
}
