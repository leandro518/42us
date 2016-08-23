/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palatorr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:15:40 by palatorr          #+#    #+#             */
/*   Updated: 2016/08/21 13:21:37 by palatorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_grid
{
	char	**lines;
	int		**numbers;
}				t_grid;

int				check_element(struct s_grid mygrid, int y, int x);
void			ft_putnbr(int nb);
void			print_puzzle(struct s_grid mygrid);
int				compare(struct s_grid grid1, struct s_grid grid2);
void			sdk_alloc(struct s_grid *mygrid);
int				sdk_starts(struct s_grid mygrid, int size, char **str);
int				error(void);

#endif
