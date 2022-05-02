
#include "libft.h"

char    *ft_strdup(const char *s)
{
    int n;
    int i;

    char *p;
    n = 0;
    i = 0;
    while(s[n])
        n++;
    p = malloc(sizeof(char) * (n + 1));
    if (!p)
        return (NULL);
    while (s[i])
    {
        p[i] = s[i];
        i++;
    }
    return (p);
}

int main()
{
    char *str = "";
    char *p = strdup(str);
    char *p2 = ft_strdup(str);
    
    printf("%s\n", p);
    printf("%s\n", p2);

    free (p);
    free (p2);
}