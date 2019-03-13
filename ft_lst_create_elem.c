/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create_elem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:28:37 by ypetitje          #+#    #+#             */
/*   Updated: 2019/03/13 09:52:50 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_create_elem(void const *content)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
	}
	else
	{
		list->content = (t_list *)malloc(sizeof(content));
		if (list->content == NULL)
		{
			free(list);
			return (NULL);
		}
		ft_memcpy(list->content, content, sizeof(content));
		list->content_size = sizeof(content);
		list->next = NULL;
	}
	return (list);
}
