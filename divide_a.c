#include "push_swap.h"

void	divide_a(stack_node **a, stack_node **b)
{
	int m;
	int n;
	int check;
	int ch_l;
	int count;
	int rotate;
	
	n = 0;
	if ((*a)->chunk == 2)
		return ;
	printf("ch %d\n", chunk_length(*a));
	while (chunk_length(*a) != 2 && chunk_length(*a) != 1)
	{
		ch_l = chunk_length(*a);
		m = midpoint(data_to_array(*a), ch_l);
		//printf("m %d\n", m);
		n += ch_l / 2;
		count = 0;
		rotate = 0;
		check = 0;
		if (ch_l != list_length(*a))
			check = 1;
		(*a)->chunk = 0;
		if (!check)
			chunk_last(*a)->chunk = 0;
		//print_stack(*a);
		//printf("verj\n");
		while ((*a)->data < m)
		{
			pa_pb(a, b);
			if (count == 0 && b)
				(*b)->chunk = 1;
			count++;
		}
		//print_stack(*a);
		//print_stack(*b);
		//printf("bbbb\n");
		//printf("verj\n");
		while ((ft_lstlast(*a))->data < m)
		{
			rra_rrb(a);
			pa_pb(a, b);
			if (count == 0 && b)
				(*b)->chunk = 1;
			count++;
		}
		//print_stack(*a);
		while (chunks_length(*b) != n)
		{
			if ((*a)->data < m)
			{
				pa_pb(a, b);
				if (count == 0)
					(*b)->chunk = 1;
				count++;
			}
			else
			{
				ra_rb(a);
				if (check)
					rotate++;
				ft_lstlast(*a)->chunk = 0;
			}
		}
		print_stack(*a);
		(*b)->chunk = 1;
		if(ft_lstlast(*a)->chunk != 2)
			ft_lstlast(*a)->chunk = 1;
		if (rotate && chunks_length(*a) != 0)
			ft_lstlast(*a)->chunk = 0;
		while (rotate > 0)
		{
			rra_rrb(a);
			rotate--;
		}
		(*a)->chunk = 1;
		//uncomplete_chunk_last(*a)->chunk = 1;
		print_stack(*a);
		print_stack(*b);
		printf("verj\n");
	}
	//print_stack(*a);
	if (chunk_length(*a) == 1)
	{
		if ((*a)->data > (*a)->next->data && (*a)->next)
			sa_sb(a);
		if ((*a)->next && (*a)->next->chunk == 2)
			(*a)->chunk = 2;
		else
		{
			pa_pb(a, b);
			(*b)->chunk = 1;
			if ((*b)->next && (*b)->next->chunk == 2)
				(*b)->chunk = 2;
		}
	}
	if (chunk_length(*a) == 2)
	{
		if ((*a)->data > (*a)->next->data)
			sa_sb(a);
		if (((*a)->next->next && (*a)->next->next->chunk == 2) || list_length(*a) == 2)
		{
			(*a)->chunk = 2;
			(*a)->next->chunk = 2;
		}
		else
		{
			pa_pb(a, b);
			pa_pb(a, b);
			(*b)->chunk = 1;
			(*b)->next->chunk = 1;
			if ((*b)->next->next && (*b)->next->next->chunk == 2)
			{
				(*b)->chunk = 2;
				(*b)->next->chunk = 2;
			}
		}
	}
	//print_stack(*a);
	//printf("end\n");
}


void	sort_a(stack_node **a, stack_node **b, int n)
{
	while (!(sorted(*a) && list_length(*a) == n))
	{
		divide_a(a, b);
		printf("\na\n");
		print_stack(*a);
		divide_b(a, b);
		printf("\nbbbbbbb\n");
		print_stack(*b);
	}
}
