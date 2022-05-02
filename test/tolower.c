
#include "libft.h"

int	ft_tolower(int c)
{
	if((c >= 65 && c <= 90))
		return(c + 32);
	return (c);
}

int	main()
{
	printf("%c\n", tolower('/'));
	printf("%c\n", ft_tolower('/'));
	return(0);
}
