/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:48:49 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/22 15:33:49 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	if (!(final = malloc(sizeof(char) * (ft_strlen((char const *)s1) + \
						ft_strlen((char const *)s2) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		final[i] = s2[k];
		i++;
		k++;
	}
	final[i] = '\0';
	return (final);
}

int		ft_append_read(char *fds[65535], int fd, int buf)
{
	char	*buffer;
	char	*tmp;
	int		i;

	buffer = malloc(buf + 1 * sizeof(char));
	i = buf + 1;
	while (i > 0)
		*(buffer + --i) = 0;
	i = read(fd, buffer, buf);
	if (!fds[fd])
	{
		fds[fd] = malloc(1);
		*fds[fd] = '\0';
	}
	tmp = fds[fd];
	fds[fd] = ft_strjoin(tmp, buffer);
	free(tmp);
	free(buffer);
	return (i <= 0 ? i : 1);
}

int		get_next_line(int fd, char **line)
{
	static	char	*stat[65535];
	char			*tmp;
	int				len;
	int				etat;

	etat = 1;
	while (!ft_strchr(stat[fd], '\n') && etat > 0)
		eof = ft_append_read(stat, fd, BUFFER_SIZE);
	if (etat >= 0)
	{
		if (etat == 0)
			len = ft_strchr(stat[fd], '\0') - stat[fd];
		else
			len = ft_strchr(stat[fd], '\n') - stat[fd];
		if (!(*line = malloc((len + 1) * sizeof(char))))
			return (-1);
		else
			ft_memcpy(*line, stat[fd], len + 1);
		if (etat > 0)
			*(ft_strchr(*line, '\n')) = '\0';
		tmp = etat == 0 ? 0 : ft_strdup(ft_strchr(stat[fd], '\n') + 1);
		free(stat[fd]);
		stat[fd] = etat == 0 ? 0 : tmp;
	}
	return (etat);
}
