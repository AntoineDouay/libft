
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dlen;
	size_t slen;
	size_t i;

	dlen = 0;
	slen = 0;
	i = 0;
	while(dst[dlen])
		dlen++;
	while(src[slen])
		slen++;
	if (size < dlen)
		return (size + slen);
	while (*src && dlen < (size - 1))
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return ((dlen - i) + slen);
}

int	main()
{
	char dest[10] = "salut";
	char src[5] = "loulo";
	int size = ft_strlcat(dest, src, 10);
	printf("%s\n", dest);
	printf("%d\n", size);
	return (0);
}
