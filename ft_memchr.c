/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:01:27 by yann              #+#    #+#             */
/*   Updated: 2018/11/11 17:47:01 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*sptr;

	sptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*sptr == (unsigned char)c)
			return (sptr);
		sptr++;
	}
	return (NULL);
}
