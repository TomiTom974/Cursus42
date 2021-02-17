/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:31:09 by tobarite          #+#    #+#             */
/*   Updated: 2021/02/17 15:32:00 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFF_SIZE
#  define BUFF_SIZE 1
# endif
# include "stdlib.h"
# include "unistd.h"
# include "stdio.h"

int		get_next_line(const int fd, char **line);
int		ft_check(char *buf);
int		ft_strlen(char *str);
char	*ft_strdup(const char *s1);
char	*ft_substr(char *s, unsigned int start, int len);
char	*ft_strjoin(char *s1, char *s2);

#endif
