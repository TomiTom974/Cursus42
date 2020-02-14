/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 18:03:22 by tobarite          #+#    #+#             */
/*   Updated: 2019/12/17 01:48:26 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;

	i = 0;
	while (i < (int)ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[(int)ft_strlen(str) - i - 1];
		str[(int)ft_strlen(str) - i - 1] = tmp;
		i++;
	}
	return (str);
}
