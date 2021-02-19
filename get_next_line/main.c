/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:16:18 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/19 14:45:52 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(int ac, char **av)
{
	int i;
	int fd;
	char **line;

	line = NULL;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		printf("\nentree de GNL\n");
		i = get_next_line(fd, line);
		printf("sortie de GNL");
		printf("\nLigne lu :  %s\n", *line);
	}
	return (0);
}
