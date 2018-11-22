/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:28:37 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/22 11:33:17 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_back(t_list **begin_list, void const *data)
{
	t_list	*list;

	if (*begin_list == NULL)
	{
		*begin_list = ft_lst_create_elem(data);
		if (*begin_list == NULL)
			return ;
	}
	else
	{
		list = *begin_list;
		while(list->next)
			list = list->next;
		list->next = ft_lst_create_elem(data);
	}
}
