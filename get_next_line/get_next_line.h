/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:49:46 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/24 12:08:12 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

struct			s_list
{
	char		*tmp;
	int			line_len;
	int			eof;
};

char			*ft_strchr(const char *s, int c);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
char			*ft_strdup(const char *s1);
int				ft_strlen(char const *s);
char			*ft_strjoin(char const *s1, char const *s2);
int				get_next_line(int fd, char **line);

#endif
