/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:11:11 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/16 16:06:48 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**create_tab(char const *s, char c)
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

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;
	int		start;

	if ((tab = create_tab(s, c)) == NULL)
		return (NULL);
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
			if ((tab[j++] = ft_strsub(s, start, i - start)) == NULL)
				return (NULL);
		}
	}
	return (tab);
}
#include <string.h>

void			split_cmp_array(char ** expected, char ** got)
{
	for (; *expected; expected++, got++)
	{
		if (*got == NULL || strcmp(*expected, *got))
		{
			SET_DIFF(*got, *expected);
			exit(TEST_FAILED);
		}
	}

	exit(TEST_SUCCESS);
}

int main(void)
{			

			char	*string = "      split       this for   me  !       ";
			char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});

			char	**result = ft_strsplit(string, ' ');

			split_cmp_array(expected, result);
	return 0;
}