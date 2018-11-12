/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:53:35 by yann              #+#    #+#             */
/*   Updated: 2018/11/12 13:54:13 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*destptr;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	destptr = dest;
	while (i < n)
	{
		destptr[i] = ((const char *)src)[i];
		if (((const char *)src)[i] == c)
			return ((char *)dest + i + 1);
		i++;
	}
	return (NULL);
}
