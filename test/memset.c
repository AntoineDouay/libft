
#include "libft.h"

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

int	main()
{
	char c[20];
	
	memset(c, 'l', 20);
	printf("%s\n", c);
	ft_memset(c, 'c', 20);
	printf("%s\n", c);
	
	return (0);
}
