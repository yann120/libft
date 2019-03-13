/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:28:37 by ypetitje          #+#    #+#             */
/*   Updated: 2019/03/13 16:50:29 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*resulthead;
	t_list	*result;

	if (lst == NULL)
		return (NULL);
	elem = f(lst);
	result = ft_lstnew(elem->content, elem->content_size);
	if (result == NULL)
		return (NULL);
	resulthead = result;
	lst = lst->next;
	while (lst)
	{
		elem = (*f)(lst);
		result->next = ft_lstnew(elem->content, elem->content_size);
		if (result->next == NULL)
			return (NULL);
		lst = lst->next;
		result = result->next;
	}
	result->next = NULL;
	return (resulthead);
}
