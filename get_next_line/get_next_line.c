/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:16:29 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/19 16:45:20 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char *s, unsigned int start, int len)
{
	int		count;
	int		size;
	char	*tab;

	count = 0;
	//if (!s)
	//	return (NULL);
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
	if (str == NULL)
		return (0);
	while (str[i] != '\n')
		i++;
	return (i);
}

char	*ft_malloc_it(int size)
{
	char	*str;
	int	i;

	i = 0;
	if (!(str = malloc(sizeof(size + 1))))
		return (NULL);
	while (i < size)
		str[i++] = 0;
	str[i] = '\0';
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	static char	*stoc;
	char		buf[BUFF_SIZE + 1];
	int			v;
	char		*tmp;

	stoc = NULL;
	tmp = NULL;
	v = 1;

	//if (fd < 0 || BUFF_SIZE < 1 || line == NULL)
	//	return (-1);
	while (ft_check(buf)== 1)
	{
		if (!stoc)
			stoc = ft_malloc_it(1);
		read(fd, buf, BUFF_SIZE);
		printf("\nbuf ressemble a ca : %s\n\n", buf);
		stoc = ft_strjoin(stoc, buf);
		printf("\nStoc ressemble a ca : %s\n\n", stoc);
	}
	*line = ft_substr(stoc, 0, ft_strlen_n(stoc));
	if (v == 0)
		return (1);
	else
		return (0);
}
