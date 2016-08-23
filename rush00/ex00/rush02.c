/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzilli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 15:24:34 by dzilli            #+#    #+#             */
/*   Updated: 2016/08/14 15:24:46 by dzilli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	begin(int x)
{
	int a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar('A');
		}
		else
		{
			if (a == x)
			{
				ft_putchar('A');
				ft_putchar('\n');
			}
			else
			{
				ft_putchar('B');
			}
		}
		a++;
	}
}

void	middle(int x)
{
	int a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar('B');
		}
		else
		{
			if (a == x)
			{
				ft_putchar('B');
				ft_putchar('\n');
			}
			else
			{
				ft_putchar(' ');
			}
		}
		a++;
	}
}

void	end(int x)
{
	int a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar('C');
		}
		else
		{
			if (a == x)
			{
				ft_putchar('C');
				ft_putchar('\n');
			}
			else
			{
				ft_putchar('B');
			}
		}
		a++;
	}
}

void	rush(int x, int y)
{
	int a;

	a = 1;
	while (a <= y)
	{
		if (a == 1)
		{
			begin(x);
		}
		else
		{
			if (a == y)
			{
				end(x);
			}
			else
			{
				middle(x);
			}
		}
		a++;
	}
}

