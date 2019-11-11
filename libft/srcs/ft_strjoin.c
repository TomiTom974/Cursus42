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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	k;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	final = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	k = 0;
	while (s1)
	{
		final[i] = s1[i];
		i++;
	}
	while (s2)
	{
		final[i] = s2[k];
		i++;
		k++;
	}
	return (final);
}
