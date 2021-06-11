#include "push_swap.h"

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

int		is_chunk_2(stack_node *a)
{
	while (a)
	{
		if (a->chunk == 2)
			return (1);
		a = a->next;
	}
	return (0);
}

stack_node	*uncomplete_chunk_last(stack_node *a)
{
	while (a && a->next && a->chunk != 2)
	{
		a = a->next;
	}
	return (a);
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
