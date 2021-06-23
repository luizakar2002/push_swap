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
	
	/*
	divide_a(a, b);
	printf("\nmain a_divide_1\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);
	
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

	divide_a(a, b);
	printf("\nmain a_divide_9\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_9");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_10\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_10");
	print_stack(*b);
	
	divide_a(a, b);
	printf("\nmain a_divide_11\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_11");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_12\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_12");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_13\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_13");
	print_stack(*b);
	
	
	divide_a(a, b);
	printf("\nmain a_divide_14\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_14");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_15\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_15");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_16\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_16");
	print_stack(*b);
	
	
	divide_a(a, b);
	printf("\nmain a_divide_17\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_17");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_18\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_18");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_19\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_19");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_20\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_20");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_21\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_21");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_22\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_22");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_23\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_23");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_24\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_24");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_25\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_25");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_26\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_26");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_27\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_27");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_28\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_28");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_29\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_29");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_30\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_30");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_31\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_31");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_32\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_32");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_33\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_33");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_34\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_34");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_35\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_35");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_36\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_36");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_37\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_37");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_38\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_38");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_39\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_39");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_40\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_40");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_41\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_41");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_42\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_42");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_43\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_43");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_44\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_44");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_45\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_45");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_46\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_46");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_47\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_47");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_48\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_48");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_49\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_49");
	print_stack(*b);

	divide_a(a, b);
	printf("\nmain a_divide_50\n");
	print_stack(*a);
	printf("\nmain b\n");
	print_stack(*b);

	divide_b(a, b);
	printf("\nmain a\n");
	print_stack(*a);
	printf("\nmain b_divide_50");
	print_stack(*b);
	*/
}
