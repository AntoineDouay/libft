
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}	
	return (last);
}

int	main()
{
	char *s = "salut mon pote";
	printf("%s\n", ft_strrchr(s, 111));
	return (0);
}
