
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    char *o;
    char *l;

    l = (char *)little;
    if (*little == '\0')
        return ((char *)big);
    while (--len && *big)
    {
        if (*little == *big)
        {
            o = (char *)big;
            while (*++l == *++big && --len);
            if (*l == '\0')
                return (o);
            else
                l = (char *)little;
        }
        big++;
    }
    return (0);
}

int main()
{
    char *big = "salut";
    char *little = "lu";
    printf("%s\n", strnstr(big, little, 3));
    printf("%s\n", ft_strnstr(big, little, 3));
    return (0);
}
