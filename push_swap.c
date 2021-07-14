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
	sort_a(a, b, list_length(*a));
	free(arr);
	free_stack(*a);
	free_stack(*b);
}
