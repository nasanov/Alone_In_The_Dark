#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (begin_list != 0)
	{
		f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}