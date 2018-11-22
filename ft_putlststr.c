/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlststr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:28:37 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/22 11:26:54 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlststr(t_list **begin_list)
{
	t_list	*list;

	list = *begin_list;
	if(list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
