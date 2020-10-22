/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:16:29 by tobarite          #+#    #+#             */
/*   Updated: 2020/10/22 17:48:54 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char *s, unsigned int start, int len)
{
	char *str;
	int i;

	i = len;
	str = malloc(sizeof(char) * (len + 2));
	s = s + start;
	while (s && len > 0)
	{
		str = s;
		str++;
		s++;
		len--;
	}
	*str = '\0';
	return (str - i);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_check_buf(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_task(char *stat, char **line)
{
	int		i;

	i = 0;
	while (stat[i] != '\n' && stat[i] != '\0')
	{
		i++;
	}
	printf("\nVoici ce que contient la stat : %s\n", stat);
	*line = ft_substr(stat, 0, i);
	printf("\nVoici ce que contient la line : %s\nFIN DE LINE\n", *line);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE];
	static char	*stat;
	char		*tmp;
	int			i;
	int			y;


	tmp = NULL;
	stat = malloc(sizeof(char *));
	i = 0;
	y = ft_strlen(stat);
	if (fd < 0 || BUFF_SIZE < 1 || line == NULL || read(fd, buf, 0))
		return (-1);
	while (ft_check_buf(stat))
	{
		read(fd, buf, BUFF_SIZE);
		i = 0;
		while (i < BUFF_SIZE)
		{
			stat[y] = buf[i];
			y++;
			i++;
		}
	}
	ft_task(stat, line);
	i = 0;
	y = 0;
	while (stat[i] != '\n' && stat[i])
		i++;
	if (stat[i])
	{
		while (stat[i])
		{
			tmp[y] = stat[i];
			i++;
			y++;
		}
		tmp[y] = '\0';
		free(stat);
		stat = tmp;
	}
	return (1);
}
