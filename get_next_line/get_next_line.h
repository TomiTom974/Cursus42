/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:31:09 by tobarite          #+#    #+#             */
/*   Updated: 2020/10/19 18:47:01 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFF_SIZE
#  define BUFF_SIZE
# endif
# include "stdlib.h"
# include "unistd.h"
# include "stdio.h"
# include "libc.h"

int		get_next_line(const int fd, char **line);

#endif
