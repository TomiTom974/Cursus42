/*
**------------------------------------------------------------------------
**									 +
**			PROJET 42 FT_PRINTF MAIN TEST			 +
**				by tobarite				 +
**									 +
**------------------------------------------------------------------------
*/

#include "ft_printf.h"
#include "stdio.h"

int	parse(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **ad)
{
	int	*test_p;
	int	test_d = 132;
	int	test_i = 231;
	char	test_c = 'g';
	char	*test_s = "gg les boys";

	if (ac == 2)
	{
		if (parse(ad[1], 'c'))
		{
			printf("%d", printf("test c : %c\n", test_c));
			printf("%d", ft_printf("test c : %c\n", test_c));
		}
		if (parse(ad[1], 's'))
		{
			printf("%d", printf("test s : %s\n", test_s));
			printf("%d", ft_printf("test s : %s\n", test_s));
		}
		if (parse(ad[1], 'p'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], 'd'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], 'i'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], 'u'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], 'x'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], 'X'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], '-'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], '0'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], '.'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], '*'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
		if (parse(ad[1], '%'))
		{
			printf("%d", printf(""));
			printf("%d", ft_printf(""));
		}
	}
	return (0);
}
