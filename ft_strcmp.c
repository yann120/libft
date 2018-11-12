/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:38:50 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/12 09:46:51 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *str1, char *str2)
{
	int i;
	int stop;

	i = 0;
	stop = 0;
	while (str1[i] && stop == 0)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	if (str1[0] == 0)
		return (-str2[0]);
	else if (str1[i] == 0)
		return (-str2[i]);
	return (0);
}
