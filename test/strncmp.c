
#include "libft.h"

int	ft_strncmp(const char* s1, const char *s2, size_t n)
{
	while(n--)
	{
		if(*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	char *dest = "la fou";
	char *src = "la foy";
	printf("%d\n", strncmp(dest, src, 6));
	printf("%d\n", ft_strncmp(dest, src, 6));
	return (0);
}
