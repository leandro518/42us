/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 14:45:27 by llima             #+#    #+#             */
/*   Updated: 2016/08/21 14:45:29 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		backtrack(struct s_grid mygrid, int y, int x);
int		backtrack_rev(struct s_grid mygrid, int y, int x);

int		attempt_fill(struct s_grid mygrid, int y, int x, int num)
{
	mygrid.numbers[y][x] = num;
	if (check_element(mygrid, y, x))
	{
		if (backtrack(mygrid, y, x))
			return (1);
		else
			mygrid.numbers[y][x] = 0;
	}
	else
		mygrid.numbers[y][x] = 0;
	return (0);
}

int		backtrack(struct s_grid mygrid, int y, int x)
{
	int num;

	num = 1;
	if (mygrid.numbers[y][x] != 0 && y < 9 && x < 9)
	{
		if (x + 1 < 9)
			return (backtrack(mygrid, y, x + 1));
		else if (y + 1 < 9)
			return (backtrack(mygrid, y + 1, 0));
		else
			return (1);
	}
	else
	{
		while (num < 10)
		{
			if (attempt_fill(mygrid, y, x, num))
				return (1);
			num++;
		}
	}
	if (y < 9 && x < 9)
		return (0);
	return (1);
}

int		attempt_fill_rev(struct s_grid mygrid, int y, int x, int num)
{
	mygrid.numbers[y][x] = num;
	if (check_element(mygrid, y, x))
	{
		if (backtrack_rev(mygrid, y, x))
			return (1);
		else
			mygrid.numbers[y][x] = 0;
	}
	else
		mygrid.numbers[y][x] = 0;
	return (0);
}

int		backtrack_rev(struct s_grid mygrid, int y, int x)
{
	int num;

	num = 1;
	if (mygrid.numbers[y][x] != 0 && y >= 0 && x >= 0)
	{
		if (x - 1 >= 0)
			return (backtrack_rev(mygrid, y, x - 1));
		else if (y - 1 >= 0)
			return (backtrack_rev(mygrid, y - 1, 8));
		else
			return (1);
	}
	else
	{
		while (num < 10)
		{
			if (attempt_fill_rev(mygrid, y, x, num))
				return (1);
			num++;
		}
	}
	if (y >= 0 && x >= 0)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	struct s_grid	mygrid1;
	struct s_grid	mygrid2;
	int				temp1;
	int				temp2;

	if (argc != 10)
		return (error());
	sdk_alloc(&mygrid1);
	if (!sdk_starts(mygrid1, argc - 1, ++argv))
		return (error());
	sdk_alloc(&mygrid2);
	if (!sdk_starts(mygrid2, argc - 1, argv))
		return (error());
	temp1 = backtrack(mygrid1, 0, 0);
	temp2 = backtrack_rev(mygrid2, 8, 8);
	if (!temp1 || !temp2)
		return (error());
	if (temp1 && temp2)
	{
		if (compare(mygrid1, mygrid2) == 1)
			print_puzzle(mygrid1);
		else
			return (error());
	}
	return (0);
}
