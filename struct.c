#include "push_swap.h"

stack_node	*new_node(int data)
{
	stack_node	*new;

	if (!(new = malloc(sizeof(stack_node))))
		error_exit(-1);
	new->data = data;
	new->chunk = 0;
	new->next = NULL;
	return (new);
}

stack_node	*ft_lstlast(stack_node *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

void		push(stack_node **lst, int data)
{
	stack_node	*new;

	new = new_node(data);
	new->next = *lst;
	*lst = new;
}

void		pop(stack_node **lst)
{
	stack_node	*t;

	if (!(*lst))
		error_exit(0);
	if (!(*lst)->next)
		(*lst)->next = NULL;
	t = *lst;
	*lst = (*lst)->next;
	free(t);
}

int		list_length(stack_node  *lst)
{
	int size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

stack_node	*ft_lstprev(stack_node *lst)
{
	while (lst && lst->next && lst->next->next)
		lst = lst->next;
	return (lst);
}

int		chunk_length(stack_node *ptr)
{
	int count;

	count = 0;
	if (ptr->next && ptr->next->next && ptr->chunk ==  1 && ptr->next->chunk == 1 && ptr->next->next->chunk == 0)
		return (1);
	if (ptr->next && ptr->next->next && ptr->next->next->next && ptr->chunk == 1 && ptr->next->chunk == 1 && ptr->next->next->chunk == 1 && ptr->next->next->next->chunk == 1)
		return (1);
	if (ptr->next && ptr->next->chunk == 2 && ptr->chunk == 1)
		return (1);
	if (ptr && !ptr->next && ptr->chunk != 2)
		return (1);
	if (ptr->next && ptr->next->next && ptr->next->next->next && ptr->chunk == 1 && ptr->next->chunk == 1 && ptr->next->next->chunk == 1 && ptr->next->next->next->chunk == 2)
		return (1);
	while (ptr)
	{
		//printf("%d %d\n", (ptr)->chunk, ft_lstlast(ptr)->chunk);
		if (ptr->chunk == 1)
		{
			ptr = ptr->next;
			while (ptr && ptr->chunk == 0)
			{
				ptr = ptr->next;
				count++;
			}
			count += 2;
			return (count);
		}
		//if (ptr->next != NULL)
			ptr = ptr->next;
	}
	return (count);
}
