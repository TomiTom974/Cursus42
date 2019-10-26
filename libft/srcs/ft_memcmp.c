int	memcmp(const void *s1, const void s*s2m size_t n)
{
	const void *tmp1;
	const void *tmp2;

	if !(*s1 || *s2)
		return (NULL);
	tmp1 = s1;
	tmp2 = s2;
	while (s1 && s2 && s1 == s2)
	{
		s1++;
		s2++;
	}
	return (s1 - s2)
}
