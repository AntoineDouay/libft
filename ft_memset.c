
void	*ft_memset(void *s, int c, size_t n)
{
	char *p;
	p = (char *)s;
	size_t	i;
	i = 0;
	while(i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (s);
}
