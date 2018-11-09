/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:35:35 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/09 12:27:39 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// char	*ft_strncpy(char *dest, char *src, size_t len)
// {
// 	size_t i;
// 	// size_t lendest;
// 	size_t lensrc;

// 	i = 0;
// 	// lendest = ft_strlen(dest);
// 	lensrc = ft_strlen((char*)src);

// 	while (i < len)
// 	{
// 		if (i > lensrc)
// 			dest[i] = 0;
// 		else
// 			dest[i] = src[i];
// 		i++;
// 	}

	
// 	// if (len > lendest)
// 	// {
// 	// }
// 	// dest[i] = 0;
// 	return (dest);
// }


char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}


// int main(void)
// {

// 	printf("%s\n", ft_strncpy(dest, "lorem", 8));
// 	printf("%s\n", strncpy(dest, "lorem", 8));
	
// 	return 0;
// }

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// int		main(int argc, const char *argv[])
// {
// 	char	*dest;
// 	int		arg;

// 	alarm(5);
// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
// 		return (0);
// 	memset(dest, 0, 15);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		memset(dest, 's', 13);
// 		if (dest != ft_strncpy(dest, "lorem", 6))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 15);
// 		printf("\n%s\n", strncpy(dest, "lorem", 6)); 
// 	}
// 	else if (arg == 2)
// 	{
// 		memset(dest, 's', 13);
// 		if (dest != ft_strncpy(dest, "lorem", 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 15);
// 		printf("\n%s\n", strncpy(dest, "lorem", 8)); 

// 	}
// 	else if (arg == 3)
// 	{
// 		memset(dest, 's', 13);
// 		if (dest != ft_strncpy(dest, "", 3))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 15);
// 		printf("\n%s\n", strncpy(dest, "", 3)); 

// 	}
// 	else if (arg == 4)
// 	{
// 		memset(dest, 's', 13);
// 		if (dest != ft_strncpy(dest, "lorem ipsum", 3))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 15);
// 		printf("\n%s\n", strncpy(dest, "lorem ipsum", 3)); 

// 	}
// 	else if (arg == 5)
// 	{
// 		memset(dest, 's', 13);
// 		if (dest != ft_strncpy(dest, "lorem ipsum", 0))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 15);
// 		printf("\n%s\n", strncpy(dest, "lorem ipsum", 0)); 

// 	}
// 	else if (arg == 6)
// 	{
// 		memset(dest, 's', 5);
// 		if (dest != ft_strncpy(dest, "lorem ipsum", 10))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 15);
// 		printf("\n%s\n", strncpy(dest, "lorem ipsum", 10)); 

// 	}
// 	return (0);
// }