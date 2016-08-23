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

void	putchar3(char x, char y, char z);

void	ft_print_comb(void)
{
	char n;
	char i;
	char a;

	n = '0';
	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			a = i + 1;
			while (a <= '9')
			{
				putchar3(n, i, a);
				if (n != '7' || i != '8' || a != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a++;
			}
			i++;
		}
		n++;
	}
}

void	putchar3(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}
