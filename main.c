#include "/Users/lukarape/Desktop/push_swap/includes/push_swap.h" 

int	main(int argc, char **argv)
{

	int			*arr;
	stack_node	*ptr;
	stack_node	*ptr1 = NULL;
	int			size;

	size = count_spaces(argv[1]) + 1;
	if (argc == 1)
		return (0);
	arr = get_ints(argv[1]);
	ptr = new_stack(arr, size);
	sa_sb(ptr);
	ptr = pa_pb(ptr, ptr1);
	while (list_length(ptr) > 0)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
		size--;
	}
	printf("pte1 %d\n", ptr1->data);
}
