#include "libft.h"

char    *ft_strnstr(char *str, int n, char *to_find)
{
    int i;
    int j;
    
    i = 0;
    if (*to_find == 0)
        return (str);
    while (str[i] && i < n)
    {
        j = 0;
        while (str[i + j] == to_find[j] && j < n)
        {
            j++;
            if (to_find[j] == 0)
                return (&str[i]);
        }
        i++;
    }
    return (0);
}