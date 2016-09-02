/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 22:49:31 by llima             #+#    #+#             */
/*   Updated: 2016/08/28 13:08:13 by llima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval.h"

char	*g_expression;

int		first(void)
{
	int	res;

	res = second();
	while (*g_expression == '+' || *g_expression == '-')
	{
		if (*g_expression == '+')
		{
			++g_expression;
			res += second();
		}
		else if (*g_expression == '-')
		{
			g_expression++;
			res -= second();
		}
	}
	return (res);
}

int		second(void)
{
	int res;

	res = checkbrackets();
	while (*g_expression == '*' || *g_expression == '/' || *g_expression == '%')
	{
		if (*g_expression == '*')
		{
			g_expression++;
			res *= checkbrackets();
		}
		else if (*g_expression == '/')
		{
			g_expression++;
			res /= checkbrackets();
		}
		else if (*g_expression == '%')
		{
			g_expression++;
			res %= checkbrackets();
		}
	}
	return (res);
}

int		checkbrackets(void)
{
	int res;

	res = 0;
	if (*g_expression == '(')
	{
		g_expression++;
		res = first();
		g_expression++;
	}
	else
		while (*g_expression >= '0' && *g_expression <= '9')
		{
			res = res * 10 + *g_expression - '0';
			g_expression++;
		}
	return (res);
}

int		eval_expr(char *str)
{
	int i;
	int rmv_spc;

	i = 0;
	rmv_spc = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			rmv_spc++;
		i++;
	}
	g_expression = (char *)(malloc(sizeof(char) * (rmv_spc + 1)));
	i = 0;
	rmv_spc = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			g_expression[rmv_spc] = str[i];
			rmv_spc++;
		}
		i++;
	}
	g_expression[rmv_spc] = '\0';
	return (first());
}
