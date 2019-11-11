#include "unistd.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = malloc(siweof(char) * (len + 1));
	while (s && len > 0)
	{
		&str = &s;
		str++;
		s++;
		len--;
	}
	return (str);
}
