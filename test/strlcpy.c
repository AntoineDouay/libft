
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t n;
	size_t i;

	n = 0;
	i = 0;
	while (src[n])
		n++;
	if (size == 0)
		return (n);
	while (*src && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

int main()
{
	char dest[10];
	char *src = "SAlut mec pas de soucis";
	size_t res = ft_strlcpy(dest, src, 10);
	printf("%s\n",dest);
	printf("%zu\n",res);
}
