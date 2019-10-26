int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c = c + ('a' - 'A');
	return (c);
}
