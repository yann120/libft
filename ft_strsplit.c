/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:01:43 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/14 14:30:27 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**create_tab(char const *s, char c)
{
	int		i;
	int		count;
	char	**tab;

	count = 0;
	i = 0;
	while (s[i] && i < ft_strlen((char *)s))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != 0)
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (tab == NULL)
		return (NULL);
	tab[count] = 0;
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;
	int		start;

	tab = create_tab(s, c);
	if (tab[0] == 0)
		return (tab);
	i = 0;
	j = 0;
	while (s[i] && i < ft_strlen((char *)s))
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
		{
			start = i;
			while (s[i] != c && s[i] != 0)
				i++;
			tab[j++] = ft_strsub(s, start, i - start);
		}
	}
	return (tab);
}
