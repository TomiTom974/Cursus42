char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (little == NULL)
		return (big);
	while (i != len && big[i])
	{
		if (big[i] == little[i])
			while (big[i + k] == little[i + k])
				if (little (I + K + 1) == '\0')
					return (big[i]);
				k++;
		i++;
	}
}
