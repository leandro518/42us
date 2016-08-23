/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:26:59 by llima             #+#    #+#             */
/*   Updated: 2016/08/14 13:27:29 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void	rush04( int ncol, int nlin )
{

	char tab[nlin][ncol];
	int i;
	int y;
    int lstli = nlin -1;
    int lstcol = ncol -1;

	i=0;
	y=0;
	
	while( i < nlin)
	{	
		while(y < ncol)
		{
			if((i == 0 && y == 0) || (i == lstli && y == lstcol)) //First and last Line
            {
                tab[i][y] = 'A';
            }
            else  if((i == 0 && y == lstcol) || (i == lstli && y == 0)) //First and last Line
            {
            	tab[i][y] = 'C';
            }
            else  if (i == 0 || y == 0 || i == lstli || y == lstcol)
            	tab[i][y] = 'B';
            else  
            	tab[i][y] = ' ';
            y++;
		}	
		i++;
        y=0;
	}

	i=0;
	y=0;
    
	while( i < nlin)
	{	
		while(y < ncol)
		{
    		printf("%c",tab[i][y]);
			y++;
		}
		ft_putchar('\n');
		i++;
        y=0;
	}
}



