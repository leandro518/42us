/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzilli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 15:24:53 by dzilli            #+#    #+#             */
/*   Updated: 2016/08/14 15:24:58 by dzilli           ###   ########.fr       */
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
			ft_putchar('/');
		}
		else
		{
			if (a == x)
			{
				ft_putchar('\\');
				ft_putchar('\n');
			}
			else
			{
				ft_putchar('*');
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
			ft_putchar('*');
		}
		else
		{
			if (a == x)
			{
				ft_putchar('*');
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
			ft_putchar('\\');
		}
		else
		{
			if (a == x)
			{
				ft_putchar('/');
				ft_putchar('\n');
			}
			else
			{
				ft_putchar('*');
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
