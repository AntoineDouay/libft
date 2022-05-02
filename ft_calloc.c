
#include "libft.h"

void    *ft_calloc(size_t elementCount, size_t elementSize)
{
    void *p;
    p = malloc(sizeof(elementSize) * elementCount);
    if (!p)
        return(NULL);
    while (--elementCount != -1)
        p[elementCount] = 0;
    return (p);
}