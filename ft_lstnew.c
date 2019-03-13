/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:19:36 by ypetitje          #+#    #+#             */
/*   Updated: 2019/03/13 09:53:16 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*list));
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
		list->content = (t_list *)malloc(content_size);
		if (list->content == NULL)
		{
			free(list);
			return (NULL);
		}
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
