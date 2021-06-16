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
	//printf("res [%s]\n", result);
	size = count_spaces(result) + 1;
	arr = get_ints(result, size);
	a = new_stack(a, arr, size);
	//print_stack(*a);
	three_n(a);
	sort_a(a, b, list_length(*a));
	//printf("\nmain a_divide_1\n");
	/*
	pa_pb(a, b, 'b');
	ra_rb(a, 'a');
	pa_pb(a, b, 'b');
	pa_pb(a, b, 'b');
	ra_rb(a, 'b');
	ra_rb(a, 'b');
	pa_pb(a, b, 'b');
	rra_rrb(b, 'b');
	pa_pb(a, b, 'b');
	rra_rrb(b, 'b');
	pa_pb(a, b, 'b');
	pa_pb(b, a, 'b');
	pa_pb(b, a, 'b');
	pa_pb(b, a, 'b');
	ra_rb(b, 'b');
	ra_rb(b, 'b');
	pa_pb(b, a, 'b');
	sa_sb(b, 'b');
	pa_pb(b, a, 'b');
	pa_pb(b, a, 'b');
	print_stack(*a);
	*/
	//printf("\nmain b\n");
	//print_stack(*b);
	//4 67 3 0 9 8 5 62
}
