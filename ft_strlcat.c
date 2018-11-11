#include "libft.h"

char    *ft_strlcat(char *dest, const char *src, int n)
{
    int i;
    int j;
    int k;
    
    j = 0;
    i = 0;
    while (dest[i])
        i++;
    while (src[j] && j < n)
        dest[i++] = src[j++];
    dest[i] = 0;
    k = 0;
    while (src[k])
        k++;
    return (k + n);
}