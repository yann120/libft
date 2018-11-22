/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:28:37 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/22 15:29:56 by ypetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_front(t_list **begin_list, void const *data)
{
	t_list *list;

	if (*begin_list == NULL)
	{
		*begin_list = ft_lst_create_elem(data);
		if (*begin_list == NULL)
			return ;
	}
	else
	{
		list = ft_lst_create_elem(data);
		if (list == NULL)
			return ;
		list->next = *begin_list;
		*begin_list = list;
	}
}
