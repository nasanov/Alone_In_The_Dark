/* Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list; */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	
    size = 0;
    while (begin_list)
    {
        begin_list = begin_list->next; //beginlist2
        size++;
    }
	return (size);
}

/*
** #include <stdio.h>
** #include <stdlib.h>
** int	main(void)
** {
** 	int n = 0;
** 
** 	t_list *d = malloc(sizeof(t_list));
** 	d->next = 0;
** 	d->data = &n;
** 
** 	t_list *c = malloc(sizeof(t_list));
** 	c->next = d;
** 	c->data = &n;
** 
** 	t_list *b = malloc(sizeof(t_list));
** 	b->next = c;
** 	b->data = &n;
** 
** 	t_list *a = malloc(sizeof(t_list));
** 	a->next = b;
** 	a->data = &n;
** 
** 	printf("%d\n", ft_list_size(a));
** }
*/
