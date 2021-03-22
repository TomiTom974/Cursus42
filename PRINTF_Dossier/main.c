/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:21:09 by tobarite          #+#    #+#             */
/*   Updated: 2021/03/11 15:46:11 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	char	*test_s = "INCRUSTATION";
	char	test_c = 'e';
	int		test_d = 742;

	printf("normalement quelque chose %sdoit perturber cette phrase", test_s);
	printf("\n");
	ft_printf("normalement quelque chose %sdoit perturber cette phrase", test_s);


	printf("\n");
	printf("\n");
	

	ft_printf("on va faire apparaitre la lettre E : %c", test_c);
	printf("\n");
	printf("on va faire apparaitre la lettre E : %c", test_c);
	

	printf("\n");
	printf("\n");


	ft_printf("ici le nombre sept cent quarante deux : %d", test_d);
	printf("\n");
	printf("ici le nombre sept cent quarante deux : %d", test_d);

	printf("\n");
	printf("\n");


	ft_printf("ici le nombre avec 2 space : \'%2d\'", test_d);
	printf("\n");
	printf("ici le nombre avec 2 space : \'%2d\'", test_d);


	printf("\n");
	printf("\n");


	ft_printf("ici le nombre avec -2 space : \'%-2d\'", test_d);
	printf("\n");
	printf("ici le nombre avec -2 space : \'%-2d\'", test_d);
	return (0);
}
