/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 17:29:56 by llima             #+#    #+#             */
/*   Updated: 2016/08/24 23:17:24 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;
	t_list *start;

	start = 0;
	if (ac > 0)
	{
		list = ft_create_elem(av[--ac]);
		start = list;
		ac--;
		while (ac > 0)
		{
			list->next = ft_create_elem(av[ac]);
			list = list->next;
			ac--;
		}
	}
	return (start);
}
