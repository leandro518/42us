/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 13:33:39 by llima             #+#    #+#             */
/*   Updated: 2016/08/22 13:33:47 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int i;
	int *temp;

	i = -1;
	temp = (int *)malloc(sizeof(int) * length);
	while (++i < length)
		temp[i] = f(tab[i]);
	return (temp);
}
