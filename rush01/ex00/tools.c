/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palatorr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:38:13 by palatorr          #+#    #+#             */
/*   Updated: 2016/08/21 13:38:18 by palatorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#define GET_LINE(y, x) (mygrid.numbers[y][x])
#define SPECIAL (GET_LINE(ny * 3 + py, nx * 3 + px) != 0)

int			check_square(struct s_grid mygrid, int y, int x)
{
	int ny;
	int nx;
	int py;
	int px;
	int i;

	ny = y / 3;
	nx = x / 3;
	py = 0;
	px = 0;
	i = -1;
	while (++i < 9)
	{
		if (px != x % 3 && py != y % 3 && SPECIAL)
			if (GET_LINE(ny * 3 + py, nx * 3 + px) == GET_LINE(y, x))
				return (0);
		px++;
		if (px > 2)
		{
			py++;
			px = 0;
		}
	}
	return (1);
}

int			check_element(struct s_grid mygrid, int y, int x)
{
	int ix;
	int iy;

	ix = -1;
	while (GET_LINE(y, ++ix) != -1)
		if (GET_LINE(y, x) == 0)
			continue ;
		else if (x != ix && GET_LINE(y, ix) == GET_LINE(y, x))
			return (0);
	iy = -1;
	while (GET_LINE(++iy, x) != -1)
		if (GET_LINE(y, x) == 0)
			continue ;
		else if (y != iy && GET_LINE(iy, x) == GET_LINE(y, x))
			return (0);
	return (check_square(mygrid, y, x));
}

void		print_puzzle(struct s_grid mygrid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (j != 8)
			{
				ft_putnbr(mygrid.numbers[i][j]);
				write(1, " ", 1);
			}
			else
			{
				ft_putnbr(mygrid.numbers[i][j]);
				write(1, "\n", 1);
			}
			j++;
		}
		i++;
	}
}

int			sdk_test(struct s_grid mygrid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (mygrid.numbers[i][j] != 0 && check_element(mygrid, i, j) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void		ft_putnbr(int nb)
{
	int		truncate;
	int		called;
	char	temp;

	called = 0;
	truncate = 1000000000;
	while (truncate > 0)
	{
		if ((nb / truncate) != 0 || called == 1 || (nb == 0 && truncate == 1))
		{
			called = 1;
			temp = (nb / truncate) + '0';
			write(1, &temp, 1);
		}
		nb %= truncate;
		truncate /= 10;
	}
}
