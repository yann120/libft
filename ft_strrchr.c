#include "libft.h"

char *strrchr (const char *s, int c)
{
	char				temp;
	int				i;
	unsigned char	*str;

	i = 0;
	temp = 0;
	str = (unsigned char *)s;
	while (str)
	{
		if (str[i] == (unsigned char)c)
			temp = str
		str++;
	}
	return (temp);
}