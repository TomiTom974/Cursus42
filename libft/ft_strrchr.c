/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:20:38 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/04 17:52:47 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptn;

	ptn = 0;
	while (*s)
	{
		if (*s == c)
			ptn = (char*)s;
		++s;
	}
	if (ptn)
		return (ptn);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
