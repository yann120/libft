/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:48:04 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/12 15:08:27 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		k = i;
		while (str[i + j] == to_find[j] && k < n)
		{
			j++;
			k++;
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
