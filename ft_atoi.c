
#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    long int res;

    sign = 1;
    res = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
        if (*str++ == '-')
            sign = -sign;
    while (*str >= 48 && *str <= 57)
    {
        res = res * 10 + (*str - 48);
        str++;
    }
    return (sign * res);
}

int main()
{
    char *str = "   \t\n\r\v\f  -y1479 248\t2y3 12";
    printf("%d\n", atoi(str));
    printf("%d\n", ft_atoi(str));
    return (0);
}