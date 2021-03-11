/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:02:11 by tobarite          #+#    #+#             */
/*   Updated: 2021/03/02 15:48:15 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_check(char *str)
{
	char	*final;
	int i;

	final = NULL;
	while (str[i])
	{
		
	}
	return (final);
}

void	ft_task(char *str, int a)
{
	str = ft_check(str);
	ft_putstr(str);
	if (a == 1)
		ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int i;
	int a;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			a = 0;
			if (av[i + 1])
				a = 1;
					ft_task(av[i], a);
			i++;
		}
	}
 return (0);
}
