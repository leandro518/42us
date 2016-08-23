/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 23:35:13 by llima             #+#    #+#             */
/*   Updated: 2016/08/11 11:12:31 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int div;

	div = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	while (nb / div)
		div *= 10;
	div /= 10;
	while (div != 1)
	{
		ft_putchar('*');	
		ft_putchar((nb / div)+ '0');
		ft_putchar('*');	
		ft_putchar(((nb / div) % 10) + '0');
		div /= 10;
	}
	ft_putchar('-');
	ft_putchar((nb % 10) + '0');
}

int main()
{
	ft_putnbr(425);
	return 0;
}