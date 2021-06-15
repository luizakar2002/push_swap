#include "push_swap.h"

stack_node	**new_stack(stack_node **ptr, int *arr, int size)
{
	while (size > 0)
	{
		push(ptr, arr[size-1]);
		size--;
	}
	(*ptr)->chunk = 1;
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
