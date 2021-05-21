#include "/Users/lukarape/Desktop/push_swap/includes/push_swap.h" 

int	main(int argc, char **argv)
{

	int			*arr;
	stack_node	*ptr;
	int			size;

	size = count_spaces(argv[1]) + 1;
	if (argc == 1)
		return (0);
	arr = get_ints(argv[1]);
	ptr = new_stack(arr, size);
	while (size > 0)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
		size--;
	}
}
