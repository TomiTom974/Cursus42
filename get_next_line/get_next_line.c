/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:48:49 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/24 13:04:09 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_task(char *fds[65535], int fd, int bs)
{
	char	*buffer;
	char	*swap;
	int		i;
	int		j;

	buffer = malloc(bs + 1 * sizeof(char));
	i = bs + 1;
	while (i > 0)
		*(buffer + --i) = 0;
	i = read(fd, buffer, bs);
	j = i < bs ? 0 : 1;
	if (!fds[fd])
	{
		fds[fd] = malloc(1);
		*fds[fd] = '\0';
	}
	swap = fds[fd];
	fds[fd] = ft_strjoin(swap, buffer);
	free(swap);
	free(buffer);
	return (i <= 0 ? i : 1);
}

int		get_next_line(int fd, char **line)
{
	struct s_list	var;
	static char		*fds[65535];

	var.eof = 1;
	if (read(fd, *line, 0))
		return (-1);
	while (!ft_strchr(fds[fd], '\n') && var.eof > 0)
		var.eof = ft_task(fds, fd, BUFFER_SIZE);
	if (var.eof >= 0)
	{
		if (var.eof == 0)
			var.line_len = ft_strchr(fds[fd], '\0') - fds[fd];
		else
			var.line_len = ft_strchr(fds[fd], '\n') - fds[fd];
		if (!(*line = malloc((var.line_len + 1) * sizeof(char))))
			return (-1);
		else
			ft_memcpy(*line, fds[fd], var.line_len + 1);
		if (var.eof > 0)
			*(ft_strchr(*line, '\n')) = '\0';
		var.tmp = var.eof == 0 ? 0 : ft_strdup(ft_strchr(fds[fd], '\n') + 1);
		free(fds[fd]);
		fds[fd] = var.eof == 0 ? 0 : var.tmp;
	}
	return (var.eof);
}
