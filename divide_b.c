#include "push_swap.h"

void	divide_b(stack_node **a, stack_node **b)
{
	int m;
	int n;
	int ch_l;
	int count;
	int rotate;

	n = 0;
	while (chunk_length(*b) != 2 && chunk_length(*b) != 1)
	{
		ch_l = chunk_length(*b);
		m = midpoint(chunk_to_array(*b), ch_l);
		if (ch_l % 2 == 0)
			ch_l--;
		n += ch_l / 2;
		count = 0;
		rotate = 0;
		while ((*b)->data > m)
		{
			pa_pb(b, a);
			if (count == 0)
				(*a)->chunk = 1;
			count++;
		}
		while (chunks_length(*a) != n)
		{
			if ((*b)->data > m)
			{
				pa_pb(b, a);
				if (count == 0)
					(*a)->chunk = 1;
				count++;
			}
			else
			{
				ra_rb(b);
				//if (is_chunk_2(*b))
					rotate++;
			}
		}
		(*a)->chunk = 1;
		while (rotate > 0)
		{
			rra_rrb(b);
			rotate--;
		}
		(*b)->chunk = 1;
		uncomplete_chunk_last(*b)->chunk = 1;
	}
	if (chunk_length(*b) == 1)
	{
		if ((*a)->chunk == 2)
		{
			pa_pb(b, a);
			(*a)->chunk = 2;
		}
		else
		{
			(*b)->chunk = 1;
		}
	}
	if (chunk_length(*b) == 2)
	{
		if ((*b)->data < (*b)->next->data)
			sa_sb(b);
		if ((*a)->chunk == 2)
		{
			pa_pb(b, a);
			pa_pb(b, a);
			(*a)->chunk = 2;
			(*a)->next->chunk = 2;
		}
		else
		{
			(*b)->chunk = 2;
			(*b)->next->chunk = 2;
		}
	}
	if (list_length(*b) == 2)
	{
		pa_pb(b, a);
		pa_pb(b, a);
	}
	//./push_swap "21 34 5 3 7 1 9 8 0 88 77 66 22 56 65 44"
	//./push_swap "2 4 0 1 3 5 8 10 14 6 11 7 9 12 13 15 16"
}
