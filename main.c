#include "push_swap.h" 

int	main(int argc, char **argv)
{
	stack_node	**a;
	int			*arr;
	stack_node	*ptr1;
	stack_node	*ptr2;
	stack_node	**b;
	int			size;
	int			i;
	char		*result;

	ptr1 = NULL;
	ptr2 = NULL;
	a = &ptr1;
	b = &ptr2;
	if (argc == 1)
		return (0);
	i = 1;
	result = argv[i];
	i++;
	while (i < argc)
	{
		result = ft_strjoin(result, argv[i]);
		i++;
	}
	size = count_spaces(result) + 1;
	arr = get_ints(result, size);
	a = new_stack(a, arr, size);
	three_n(a);
	//(*a)->chunk = 1;
	//ft_lstlast(*a)->chunk = 1;
	//divide_a(a, b);
	//printf("a\n");
	//print_stack(*a);
	sort_a(a, b, list_length(*a));
	//divide_a(a, b);
	printf("\nmain a_divide_1\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);
	/*
	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\n main b_divide_1\n");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_2\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_2");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_3\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_3");
	print_stack(*b);
	
	
	divide_a(a, b);
	printf("\nmain a_divide_4\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);
	
	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_4");
	print_stack(*b);
	
	divide_a(a, b);
	printf("\nmain a_divide_5\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_5");
	print_stack(*b);
	
	divide_a(a, b);
	printf("\nmain a_divide_6\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_6");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_7\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_7");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_8\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_8");
	print_stack(*b);
	*/
}
