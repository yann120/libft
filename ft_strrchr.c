/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:49:01 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/12 14:22:02 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*temp;
	int				i;

	i = 0;
	temp = 0;
	while (s[i])
	{
		if (s[i] == c)
			temp = &((char *)s)[i];
		i++;
	}
	if (s[i] == c)
		temp = &((char *)s)[i];
	return ((char *)temp);
}
