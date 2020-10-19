/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:16:29 by tobarite          #+#    #+#             */
/*   Updated: 2020/10/19 14:45:20 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//int           get_next_line(const int fd, char **line)
//{
//      si une erreur
//              renvoyer -1
//      lire sur le fd de la taille du buffer
//              si \n
//                      mettre a l'adresse *line jusqu'au \n
//                      stocker dans la static la suite de \n (free avant la ou on stock)
//                      renvoyer 1
//              si \0
//                      mettre la static dans line
//                      free la static
//                      renvoyer 0
//

int		ft_check_buf(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*stat;
	int			i;

	i = 0;
	if (fd < 0 || BUFF_SIZE < 1 ||line == NULL || read(fd, buf, 0))
                return (-1);
	while (ft_check_buf(buf))
	{
		read(fd, &buf, BUFF_SIZE);
		i = 0;
		while (buf[i])
		{
			*stat = buf[i];
			stat++;
			i++;
		}
	}
				return (1);
}

//int		main(void)
//{
//	char *ligne;
//
//	ligne = "\0";
//	get_next_line(0, &ligne);
//	printf("%s", ligne);
//	return (0);
//}
