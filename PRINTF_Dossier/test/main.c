/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:24:08 by tobarite          #+#    #+#             */
/*   Updated: 2021/03/11 13:42:25 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		main(void)
{
	int		d = 42;
	char	c = 'e';
	char	*s = "J'ai manger du pain";

	printf("voici un int : %d\n", d);
	printf("voici un caractere : %c\n", c);
	printf("voici une phrase : %s\n", s);
	printf("voici un test : \"%1.1d\"\n", d);

	return (0);
}
