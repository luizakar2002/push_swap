#include "push_swap.h"

stack_node	*new_node(int data)
{
	stack_node	*new;

	if (!(new = malloc(sizeof(stack_node))))
		error_exit(-1);
	new->data = data;
	new->next = NULL;
	return (new);
}

stack_node	*ft_lstlast(stack_node *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

stack_node	*push(stack_node *lst, int data)
{
	stack_node	*new;
	new = new_node(data);
	if (!lst)
	{
		new->next = NULL;
		lst = new;
	}
	else
	{
		new->next = lst;
		lst = new;
	}
	return (lst);
}

stack_node	*pop(stack_node *lst)
{
	stack_node	*t;
	int			popped;

	if (!lst)
		error_exit(0);
	t = lst;
	lst = lst->next;
	popped = t->data;
	free(t);
	printf("popped %d\n", popped);
	printf("pd %d\n", lst->data);
	return (lst);
}

int		list_length(stack_node  *lst)
{
	int size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
