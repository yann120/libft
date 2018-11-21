/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:19:36 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/20 14:43:30 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
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
		list->content = malloc(sizeof(content_size));
		if (list->content == NULL)
			return (NULL); 
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
