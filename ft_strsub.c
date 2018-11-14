/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 07:56:19 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/14 08:28:03 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = ft_strnew(len);
	if (dest == NULL)
		return (NULL);
	i = start;
	len += i;
	while (i < len && s[i])
	{
		dest[i - start] = s[i];
		i++;
	}
	dest[i - start] = '\0';
	return (dest);
}
