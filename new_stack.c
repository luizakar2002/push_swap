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
