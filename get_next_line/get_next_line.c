/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:16:29 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/17 15:32:27 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char *s, unsigned int start, int len)
{
	int		count;
	int		size;
	char	*tab;

	count = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < (int)start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	if (!(tab = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (count < len)
	{
		tab[count] = s[start + count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
}

int		ft_check(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		if (str[i] == '\0')
			return (2);
		i++;
	}
	return (1);
}

int		ft_strlen_n(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		get_next_line(const int fd, char **line)
{
	static char	*stoc;
	char		buf[BUFF_SIZE + 1];
	int			v;
	char		*tmp;

	if (fd < 0 || BUFF_SIZE < 1 || line == NULL || read(fd, buf, 0))
		return (-1);
	tmp = NULL;
	v = 1;
	stoc = NULL;
	while (v == 1)
	{
		v = ft_check(buf);
		read(fd, buf, BUFF_SIZE);
		if (v == 1 || v == 0)
			stoc = ft_strjoin(stoc, buf);
		if (v == 0)
			stoc = ft_strjoin(stoc, ft_substr(buf, 0, ft_strlen_n(buf)));
		*line = ft_substr(stoc, 0, ft_strlen_n(stoc));
	}
	if (v == 0)
		return (1);
	else
		return (0);
}
