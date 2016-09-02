/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 14:31:12 by llima             #+#    #+#             */
/*   Updated: 2016/08/25 14:31:14 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cat(char *file)
{
	char	buf[BUFFER + 1];
	int		len;
	int		handle;

	if ((handle = open(file, O_RDONLY)) == -1)
		return (errno);
	while ((len = read(handle, buf, BUFFER)) != 0)
	{
		buf[len] = '\0';
		write(1, &buf, len);
	}
	if (close(handle) == -1)
		return (errno);
	return (0);
}
