#include "unistd.h"


#if ndef
#define

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#endif


char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	int	oc;
	char	final;

	i = 0;
	j = 0;
	k = 0;
	oc = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == s2[j])
				oc++;
			j++;
		}
		j = 0;
		i++;
	}
	final = malloc(sizeof(char) * (ft_strlen(s1) - oc + 1));
	i = 0;
	oc = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == s2[j])
				oc++;
			j++;
		}
		if (oc == 0)
		{
			final[k] = s1[i];
			k++;
		}
		oc = 0;
		i++;
	}
	return (final);
}
