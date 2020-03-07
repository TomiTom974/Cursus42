/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 21:01:59 by tobarite          #+#    #+#             */
/*   Updated: 2020/03/07 16:53:59 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/struct.h"

int		main(void)
{
	int		test_d;
	int		test_dd;
	char	test_c;
	char	*test_p;
	char	*test_s;

	test_d = 12;
	test_dd = 144;
	test_c = 'f';
	test_p = "Here";
	test_s = "Phrase test Holala";

/*
**		TEST DE COMPORTEMENT DE PRINTF DE BASE
*/
	printf("--------------------------------------------\n");
	printf("         TEST COMPORTEMENT PRINTF :\n\n");
	printf("%d\n", printf("Hello%20.18s\n\n", test_s));
	printf("--------------------------------------------\n");
	printf("\n\n\n");

/*
**		FONCTION PRINTF DE BASE
*/
	printf("--------------------------------------------\n");
	printf("                PRINTF :\n\n");
	printf("%d\n", printf("Hey %8.5d\ntest_s :%2.1s\n\n", test_d, test_s));
	printf("--------------------------------------------\n");
	printf("\n\n");
/*
**		MA PROPRE FONCTION FT_PRINTF
*/
	printf("--------------------------------------------\n");
	printf("               FT_PRINTF :\n\n");
	printf("%d\n", ft_printf("Hey %8.5d\ntest_s :%2.1s\n\n", test_d, test_s));
	printf("--------------------------------------------\n");
	return (0);
}
