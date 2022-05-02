
#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t	n;
	n = 0;
	while(s[n])
		n++;
	return (n);
}
