/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 23:35:13 by llima             #+#    #+#             */
/*   Updated: 2016/08/11 11:12:31 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_two(char q, char w)
{
	ft_putchar((q / 10) + '0');
	ft_putchar((q % 10) + '0');
	ft_putchar(' ');
	ft_putchar((w / 10) + '0');
	ft_putchar((w % 10) + '0');
	ft_putchar(',');
	if (q != 98)
		ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	char x;
	char y;

	x = 0;
	y = 1;
	while (x < 98)
	{
		if (y == 100)
		{
			x += 1;
			y = 0;
		}
		if (x >= y)
		{
			y = x + 1;
		}
		ft_print_two(x, y);
		y += 1;
	}
}
