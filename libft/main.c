/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:46:41 by tobarite          #+#    #+#             */
/*   Updated: 2019/11/21 15:09:22 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strtrim(char const *s1, char const *set);

int		main(int ac, char **av)
{
	char *str;

	if (ac == 3)
	{
		str = ft_strtrim(av[1], av[2]);
		printf("\ns1 = \"%s\"  et  set = \"%s\"\n\n", av[1], av[2]);
		printf("%s", str);
	}
	return (0);
}
