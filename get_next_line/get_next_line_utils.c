/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:52:41 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/24 10:48:15 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s)
		if (*s++ == c)
			return ((char*)s - 1);
	if (c == '\0')
		return ((char*)s);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		strlen;

	if (!s1)
		return (0);
	strlen = 0;
	while (s1[strlen])
		strlen++;
	if (!(s2 = malloc((strlen + 1) * sizeof(char))))
		return (0);
	while (*s1)
		*s2++ = *s1++;
	*s2 = '\0';
	return (s2 - strlen);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_strs;
	char	*joined_strs_addr;
	int		s1_len;
	int		s2_len;

	s1_len = 0;
	s2_len = 0;
	while (s1 && s1[s1_len])
		s1_len++;
	while (s2 && s2[s2_len])
		s2_len++;
	if (!(joined_strs = malloc((s1_len + s2_len + 1) * sizeof(char))))
		return (0);
	joined_strs_addr = joined_strs;
	while (s1_len--)
		*joined_strs++ = *s1++;
	while (s2_len--)
		*joined_strs++ = *s2++;
	*joined_strs = '\0';
	return (joined_strs_addr);
}

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	void	*dst_addr;

	dst_addr = dst;
	while (n--)
		*(unsigned char*)dst++ = *(unsigned char*)src++;
	return (dst_addr);
}
