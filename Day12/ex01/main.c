/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 14:50:19 by llima             #+#    #+#             */
/*   Updated: 2016/08/25 17:26:59 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *file, int nerr)
{
	if (nerr != 0)
	{
		ft_putstr("ERROR: ");
		ft_putstr(file);
		if (nerr == EPERM)
			ft_putstr("\nOperation not permitted\n");
		if (nerr == ENOENT)
			ft_putstr("No such file or directory\n");
		if (nerr == ESRCH)
			ft_putstr("No such process\n");
		if (nerr == EINTR)
			ft_putstr("Interrupted system call\n");
		if (nerr == EIO)
			ft_putstr("I/O error\n");
		if (nerr == ENXIO)
			ft_putstr("No such device or address\n");
		if (nerr == E2BIG)
			ft_putstr("Argument list too long\n");
		if (nerr == ENOEXEC)
			ft_putstr("Exec format error\n");
	}
}

int		main(int argc, char **argv)
{
	int i;
	int nret;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			nret = ft_cat(argv[i]);
			ft_error(argv[i], nret);
			i++;
		}
		return (0);
	}
	else
		return (1);
}
