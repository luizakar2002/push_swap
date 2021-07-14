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

int		one_count(stack_node *ptr)
{
	int i;

	i = 0;
	while (ptr && ptr->chunk == 1)
	{
		i++;
		ptr = ptr->next;
	}
	if (ptr->chunk == 2)
		i--;
	return (i);
}

int		chunk_length(stack_node *ptr)
{
	int count;

	count = 0;
	if (!ptr)
		return (0);
	if (ptr->next && ptr->next->chunk == 3 && ptr->chunk == 3)
		return (1);
	if (ptr->chunk == 3)
	{
		while (ptr)
		{
			ptr = ptr->next;
			while (ptr && ptr->chunk == 0)
			{
				ptr = ptr->next;
				count++;
			}
			if (ptr)
				count += 2;
			else
				count += 1;
			return (count);
		}	
	}
	return (count);
}

int		midpoint(int *arr, int n)
{
	insertionSort(arr, n);
	return (arr[n / 2]);
}

stack_node	*chunk_last(stack_node *b)
{
	b = b->next;
	while (b && b->next && b->chunk != 1)
	{
		b = b->next;
	}
	return (b);
}

int		new_chunk_length(stack_node *a)
{
	int n;

	n = 0;
	while (a && a->chunk != 2)
	{
		n++;
		a = a->next;
	}
	return (n);
}

int			chunks_length(stack_node *a)
{
	int count;

	count = 0;
	while (a && a->chunk != 2)
	{
		count++;
		a = a->next;
	}
	return (count);
}

stack_node	**new_stack(stack_node **ptr, int *arr, int size)
{
	while (size > 0)
	{
		push(ptr, arr[size-1]);
		size--;
	}
	(*ptr)->chunk = 3;
	ft_lstlast(*ptr)->chunk = 1;
	return (ptr);
}

int		not_unique(int *arr, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
