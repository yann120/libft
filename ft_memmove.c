/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:59:11 by yann              #+#    #+#             */
/*   Updated: 2018/11/09 16:57:46 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buff;
	size_t	i;

	i = 0;
	buff = (char*)malloc(sizeof(int)*n);
	if (buff == NULL)
		return (NULL);
	while (i < n)
	{
		buff[i] = ((const char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = buff[i];
		i++;
	}
	free(buff);
	return (dest);
}