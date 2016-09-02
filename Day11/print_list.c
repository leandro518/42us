#include "list.h"
#include <unistd.h>

int ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		write(1,&str[index],1);
		index++;
	}
	return(0);
}

void print_list(t_list *list)
{
	while(list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}
