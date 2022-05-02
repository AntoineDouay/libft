
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *p;
	p = (char *)s;
	size_t	i;
	i = 0;
	while(i < n)
	{
		p[i] = 0;
		i++;
	}
	return;
}

int	main()
{
	char c[20] = "salut c'est cool mon";
	
	bzero(c, 8);
	printf("%s\n", c);
	printf("%c\n", c[10]);
	ft_bzero(c, 8);
	printf("%s\n", c);
	printf("%c\n", c[10]);
	
	return (0);
}
