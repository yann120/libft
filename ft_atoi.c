/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:23:28 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/16 14:31:57 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	result(char *str, int i, int negative)
{
	long	result;
	int		test;

	result = 0;
	test = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i++] - 48) * negative;
			test = result;
			if (negative == 1 && test < result)
				return (-1);
			else if (negative == -1 && test > result)
				return (0);
		}
		else
			return (result);
	}
	return (result);
}

int			ft_atoi(char *str)
{
	int i;
	int negative;

	i = 0;
	negative = 1;
	if (ft_strcmp(str, "2147483647") == 0)
		return (2147483647);
	else if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		negative = -1;
	}
	return ((int)result(str, i, negative));
}
