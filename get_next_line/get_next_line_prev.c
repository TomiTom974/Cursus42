/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:30:14 by tobarite          #+#    #+#             */
/*   Updated: 2020/10/19 13:16:20 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//int		get_next_line(const int fd, char **line)
//{
//	si une erreur
//		renvoyer -1
//	lire sur le fd de la taille du buffer
//		si \n
//			mettre a l'adresse *line jusqu'au \n
//			stocker dans la static la suite de \n (free avant la ou on stock)
//			renvoyer 1
//		si \0
//			mettre la static dans line
//			free la static
//			renvoyer 0
//}

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	final = malloc(sizeof(char) * (ft_strlen((char const *)s1) + \
				ft_strlen((char const *)s2) + 1));
	i = 0;
	k = 0;
	while (s1)
	{
		final[i] = s1[i];
		i++;
	}
	while (s2)
	{
		final[i] = s2[k];
		i++;
		k++;
	}
	return (final);
}

int		ft_detectn(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

int		ft_caffer(char *str, char *line, char *stat)
{
	int i;

	i = 0;
	*line = *stat;
	while (str[i] != '\n')
	{
		if (str[i] == '\0')
		{
			*line = *str;
			return (0);
		}
		*line = str[i];
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*stock;
	char		*buf;
	char		*str;
	int			check;

	if (stock)
		str = stock;
	buf =  "\0";
	if (fd < 0 || line == NULL || read(fd, buf, 0))
		return (-1);
	while (ft_detectn(str = ft_strjoin(str, buf)) == 1)
		check = read(fd, buf, 32);
	if (ft_caffer(str, *line, stock) == 0)
		return (0);
	return (1);
}
