/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:23:28 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/08 15:08:12 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		result(char *str, int i)
{
	int result;

	result = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i++] - 48);
		else
			return (result);
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int i;
	int negative;

	i = 0;
	negative = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		negative = 1;
	}
	if (negative == 1)
		return (result(str, i) * -1);
	else
		return (result(str, i));
}
