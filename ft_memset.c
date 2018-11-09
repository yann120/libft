/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:45:10 by yann              #+#    #+#             */
/*   Updated: 2018/11/09 12:21:06 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*sptr;

	i = 0;
	sptr = s;
	while (i < n)
		sptr[i++] = c;
	return (s);
}

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// int		main(int argc, const char *argv[])
// {
// 	void	*mem;
// 	int		arg;

// 	alarm(5);
// 	if (!(mem = malloc(sizeof(*mem) * 15)) || argc == 1)
// 		return (0);
// 	memset(mem, 'j', 15);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (mem != ft_memset(mem, 'c', 5))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 		if (mem != memset(mem, 'c', 5))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 	}
// 	else if (arg == 2)
// 	{
// 		if (mem != ft_memset(mem, 'c', 14))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 		if (mem != memset(mem, 'c', 14))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (mem != ft_memset(mem, '\n', 6))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 		if (mem != memset(mem, '\n', 6))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 	}
// 	else if (arg == 4)
// 	{
// 		if (mem != ft_memset(mem, '\0', 1))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 		if (mem != memset(mem, '\0', 1))
// 			write(1, "mem's adress was not returned\n", 30);
// 		write(1, mem, 15);
// 	}
// 	return (0);
// }
