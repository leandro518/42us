/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 10:33:16 by llima             #+#    #+#             */
/*   Updated: 2016/08/25 14:06:06 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_display_file(char *file)
{
	int		pos;
	int		handle;
	char	siz[BUFFER + 1];

	if ((handle = open(file, O_RDONLY)) == -1)
		return (1);
	while ((pos = read(handle, siz, BUFFER)) != 0)
	{
		siz[pos] = '\0';
		write(1, &siz, pos);
	}
	if (close(handle) == -1)
		return (1);
	return (0);
}
