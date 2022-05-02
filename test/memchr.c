#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;
    p = (unsigned char *)s;
    while (*p && n--)
    {
        if (*p != (unsigned char)c)    
            p++;
        else
            return (p);
    }
    return (0);
}

int main()
{
    char *str = "salut les gars";
    char c = 'l';
    size_t s = 100;
    
    void *m = memchr(str, (int)c, s);
    void *ft_m = ft_memchr(str, (int)c, s);
    printf("%s\n", (char *)m);
    printf("%s\n", (char *)ft_m);

    return (0);
}