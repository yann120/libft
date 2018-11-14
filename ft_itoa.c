/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:16:40 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/14 18:45:49 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(int n)
{
	int len;

	len = 0;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		negative;
	int		len;
	char	*str;

	len = 1;
	negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		negative = 1;
		len++;
		n = -n;
	}
	len += ft_len(n);
	str = ft_strnew(len - 1);
	str[len-- + 1] = 0;
	while (len >= 0)
	{
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	if (negative == 1)
		str[0] = '-';
	return (str);
}
