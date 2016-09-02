/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:51:49 by llima             #+#    #+#             */
/*   Updated: 2016/08/24 21:41:16 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ret;

	list_ret = begin_list;
	while (list_ret)
	{
		if ((*cmp)(list_ret->data, data_ref) == 0)
		{
			return (list_ret);
		}
		list_ret = list_ret->next;
	}
	return (0);
}
