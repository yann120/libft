/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:53:35 by yann              #+#    #+#             */
/*   Updated: 2018/11/09 12:55:59 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*destptr;

	i = 0;
	destptr = dest;
	while (i < n)
	{
		if (((const char *)src)[i] == c)
			return (dest);
		destptr[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
