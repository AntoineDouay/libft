
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *p;
	p = (char *)s;
	size_t	i;
	i = 0;
	while(i < n)
	{
		p[i] = '\0';
		i++;
	}
	return;
}
