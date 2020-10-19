/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:16:29 by tobarite          #+#    #+#             */
/*   Updated: 2020/10/19 18:46:59 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	printf("\nCHECK BUFF\n");
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			printf("\nON A BIEN FINI Y'A UN BACKSLASH N\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && i != n)
		i++;
	return (s1[i] - s2[i]);
}

void	ft_task(char *stat, char **line)
{
	int		i;
	char	c;

	c = '\n';
	i = 0;
	printf("%s\n", stat);
	printf("J'ENTRE DANS TASK\n");
	
	while (stat[i] != '\n' && stat[i] != '\0')
	{
		printf("ON COMMENCRE LE PARSING DE BACKSLASH N\n");
		**line = stat[i];
		line++;
		i++;
	}
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE];
	static char	*stat;
	int			i;
	int			y;

	stat = malloc(sizeof(char *));
	i = 0;
	y = ft_strlen(stat);
	if (fd < 0 || BUFF_SIZE < 1 || line == NULL || read(fd, buf, 0))
		return (-1);
	while (ft_check_buf(stat))
	{
		read(fd, buf, BUFF_SIZE);
		printf("---------------------------------\n");
		printf("mon buf apres le read principal : \n%s\n", buf);
		printf("---------------------------------\n");
		i = 0;
		while (i < BUFF_SIZE)
		{
			stat[y] = buf[i];
			y++;
			i++;
		}
		printf("---------------------------------\n");
		printf("ma static apres le read principal : \n%s\n", stat);
		printf("---------------------------------\n");
	}
	printf("ATTENTION TASK J'ARRIVE\n");
	ft_task(stat, line);
	return (1);
}

int main(int ac, char **av)
{
	(void)ac;
	char *line;
	int fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
}
