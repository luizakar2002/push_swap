#include "push_swap.h"

void	divide_b(stack_node **a, stack_node **b)
{
	int m;
	int n;
	int check;
	int ch_l;
	int count;
	int rotate;

	n = 0;
	if (*b == NULL)
		return ;
	check = 0;
	//ch_l = chunk_length(*b);
	if (chunk_length(*b) != list_length(*b))
		check = 1;
	while (chunk_length(*b) != 2 && chunk_length(*b) != 1 && (*b)->chunk != 2 && chunk_length(*b) != 0)
	{
		ch_l = chunk_length(*b);
		m = midpoint(chunk_to_array(*b), ch_l);
		if (ch_l % 2 == 0)
			ch_l--;
		n += ch_l / 2;
		count = 0;
		rotate = 0;
		(*b)->chunk = 0;
		if (!check)
			chunk_last(*b)->chunk = 0;
		while ((*b)->data > m)
		{
			pa_pb(b, a, 'a');
			if (count == 0)
				(*a)->chunk = 1;
			count++;
		}
		while (chunks_length(*a) != n)
		{
			if ((*b)->data > m)
			{
				pa_pb(b, a, 'a');
				if (count == 0)
					(*a)->chunk = 1;
				count++;
			}
			else
			{
				ra_rb(b, 'b');
				if (check)
					rotate++;
				ft_lstlast(*b)->chunk = 0;
			}
		}
		(*a)->chunk = 1;
		if (ft_lstlast(*b)->chunk != 2)
			ft_lstlast(*b)->chunk = 1;
		if (rotate && chunks_length(*b) != 0)
			ft_lstlast(*b)->chunk = 0;
		while (rotate > 0)
		{
			rra_rrb(b, 'b');
			rotate--;
		}
		(*b)->chunk = 1;
	//	uncomplete_chunk_last(*b)->chunk = 1;
	}
	if ((*b)->chunk == 2)
	{
		if ((*a)->chunk == 2)
		{
			pa_pb(b, a, 'a');
			(*a)->chunk = 1;
			if (sorted(*a))
				(*a)->chunk = 2;
			if(*b && (*b)->chunk == 2)
			{
				if (!(*b)->next)
				{
					pa_pb(b, a, 'a');
					(*a)->chunk = 2;
					return ;
				}
				pa_pb(b, a, 'a');
				(*a)->chunk = 2;
			}
		}
	}
	if (chunk_length(*b) == 1)
	{
		if ((*a)->chunk == 2)
		{
			if (!(*b)->next)
			{
				pa_pb(b, a, 'a');
				*b = NULL;
				b = NULL;
				return ;
			}
			//if ((*b)->data > (*b)->next->data)
				pa_pb(b, a, 'a');
			//if ((*a)->data > (*b)->data)
				(*a)->chunk = 2;
			//else if ((*a)->next->chunk == 2 && (*a)->next)
			//	(*a)->chunk = 1;
			//else
			//	(*a)->chunk = 0;
		}
		else
		{
			(*b)->chunk = 1;
			if (!((*b)->next))
				(*b)->chunk = 2;
		}
	}
	if (chunk_length(*b) == 2)
	{
		if ((*b)->data < (*b)->next->data)
			sa_sb(b, 'b');
		if ((*a)->chunk == 2)
		{
			if (list_length(*b) == 2)
			{
				pa_pb(b, a, 'a');
				pa_pb(b, a, 'a');
				*b = NULL;
				b = NULL;
				(*a)->chunk = 2;
				(*a)->next->chunk = 2;
				return ;
			}
			pa_pb(b, a, 'a');
			pa_pb(b, a, 'a');
			(*a)->chunk = 2;
			(*a)->next->chunk = 2;
		}
		else
		{
			(*b)->chunk = 2;
			(*b)->next->chunk = 2;
		}
	}
	/*
	if (list_length(*b) == 2 && (*a)->chunk == 2)
	{
		pa_pb(b, a);
		pa_pb(b, a);
	}
	*/
	if (!(*b))
		return ;
	if ((*b)->chunk == 2)
	{
		//printf("l\n");
		if ((*a)->chunk == 2)
		{
			pa_pb(b, a, 'a');
			(*a)->chunk = 1;
			if (sorted(*a))
			{
				(*a)->chunk = 2;
			}
			if(*b && (*b)->chunk == 2)
			{
				pa_pb(b, a, 'a');
				(*a)->chunk = 2;
			}
		}
	}
	//./push_swap "21 34 5 3 7 1 9 8 0 88 77 66 22 56 65 44"
	//./push_swap "2 4 0 1 3 5 8 10 14 6 11 7 9 12 13 15 16"
	//./push_swap "3 4 1 5 33 45 67 43 211 4543 654 657777 3453 245 46576532 545 343 321 5321 544342 5678 8776 5668 76 4300 54785732 0 2 90" chi ashxatum sra hamar
}
