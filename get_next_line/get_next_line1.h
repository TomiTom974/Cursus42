/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:31:09 by tobarite          #+#    #+#             */
/*   Updated: 2020/10/22 17:48:20 by tobarite         ###   ########.fr       */
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
# include "libc.h"

int		get_next_line(const int fd, char **line);
void	ft_task(char *stat, char **line);
int		ft_check_buf(char *buf);
int		ft_strlen(char *str);
char	*ft_substr(char *s, unsigned int start, int len);

#endif
