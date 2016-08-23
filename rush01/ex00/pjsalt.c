/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pjsalt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palatorr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 21:38:34 by palatorr          #+#    #+#             */
/*   Updated: 2016/08/21 21:38:35 by palatorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		compare(struct s_grid grid1, struct s_grid grid2)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid1.numbers[i][j] != grid2.numbers[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	sdk_alloc(struct s_grid *mygrid)
{
	int i;
	int j;

	i = 0;
	(*mygrid).numbers = (int**)malloc(sizeof(int *) * 10);
	while (i < 10)
	{
		(*mygrid).numbers[i] = (int *)malloc(sizeof(int) * 10);
		j = 0;
		while (j < 9)
		{
			(*mygrid).numbers[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		sdk_starts(struct s_grid mygrid, int size, char **str)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = -1;
		while (str[i][++j])
		{
			if (str[i][j] == '.')
				mygrid.numbers[i][j] = 0;
			else if (str[i][j] >= '0' && str[i][j] <= '9')
				mygrid.numbers[i][j] = str[i][j] - '0';
			else
				return (0);
		}
		if (j != 9)
			return (0);
		mygrid.numbers[i++][j] = -1;
	}
	j = -1;
	while (++j < 9)
		mygrid.numbers[9][j] = -1;
	return (1);
}

int		error(void)
{
	write(1, "Error\n", 6);
	return (0);
}
