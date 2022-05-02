
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *cdest;
	const char *csrc;
	cdest = (char *)dest;
	csrc = (const char *)src;

	if (csrc < cdest && (csrc + n) > cdest)
	{
		cdest = cdest + n;
		csrc = csrc + n;
		while (n--)
			*--cdest = *--csrc;
	}
	else
		while (n--)
			*cdest++ = *csrc++;
	return (dest);
}

int	main()
{
	char str[] = "salut mec";
	memmove(str, str + 2, 5);
	printf("%s\n", str);
	return (0);
}
