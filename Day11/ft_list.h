#ifndef __list_h__
#define __list_h__

typedef struct s_list
{
	struct s_list 	*next;
	void 						*data;
}									t_list;

#endif
