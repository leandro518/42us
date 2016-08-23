/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 13:40:44 by llima             #+#    #+#             */
/*   Updated: 2016/08/19 13:40:46 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int		find_words(char *str)
{
	int ret;

	ret = 0;
	if (ft_strcmp(str, "president") == 0)
		ret = 1;
	if (ft_strcmp(str, "attack") == 0)
		ret = 1;
	if (ft_strcmp(str, "powers") == 0)
		ret = 1;
	if (ret == 1)
		ft_putstr("Alert!!!");
	return (ret);
}

void	to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	temp[10000];
	int		i;
	int		j;
	int		k;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				temp[k] = argv[i][j];
				k++;
			}
			j++;
		}
		temp[k] = '\0';
		to_lower(temp);
		if (find_words(temp) == 1)
			return (0);
	}
	return (0);
}
