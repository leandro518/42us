/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:43:29 by llima             #+#    #+#             */
/*   Updated: 2016/08/24 20:38:50 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*list_ret;

	list_ret = begin_list;
	while (list_ret)
	{
		if ((*cmp)(list_ret->data, data_ref) == 0)
		{
			(*f)(list_ret->data);
		}
		list_ret = list_ret->next;
	}
}
