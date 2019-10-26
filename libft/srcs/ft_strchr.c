char *ft_strchr(const char *s, int c)
{
	const char *tmp;

	if (s == NULL)
		return (NULL);
	tmp = s;
	while (++s)
	{
		if (&s == c)
			tmp = s;
	}
	return (tmp);
}
