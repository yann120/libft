/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:28:37 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/20 19:29:53 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*resulthead;
	t_list	*result;

	elem = lst;
	resulthead = ft_lstnew(f(elem), elem->content_size);
	result = resulthead;
	elem = elem->next;
	while (elem)
	{
		ft_lstadd(*result, f(elem))
		elem = elem->next;
		result = result->next;
	}
}
