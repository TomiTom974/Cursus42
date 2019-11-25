/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:14:15 by tobarite          #+#    #+#             */
/*   Updated: 2019/10/09 14:26:10 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*calloc(size_t nmemb, size_t size)
{
  char			*ptr;

  s = nmemb * size;
  if ((ptr = malloc((unsigned int *)(nmemb * size))) == NULL)
    return (NULL);
  memset(ptr, 0, (unsigned int *)(nmemb * size));
  return (ptr);
}