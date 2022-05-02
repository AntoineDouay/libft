
#include "libft.h"

char	*strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (NULL);
	return ((char *)s);
}

int	main()
{
	char *s = "salut mon pote";
	printf("%s\n", strchr(s, 109));
	return (0);
}
