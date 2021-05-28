#include "push_swap.h"

stack_node	*new_stack(int *arr, int size)
{
	stack_node		*ptr;

	ptr = NULL;
	while (size > 0)
	{
		ptr = push(ptr, arr[size-1]);
		size--;
	}
	return (ptr);
}
