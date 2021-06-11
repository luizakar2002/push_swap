#include "push_swap.h"

void	three_n(stack_node **lst)
{
	int a;
	int b;
	int c;

	if (new_chunk_length(*lst) != 3)
		return ;	
	a = (*lst)->data;
	b = (*lst)->next->data;
	c = (*lst)->next->next->data;
	if (b < a && a < c)
		sa_sb(lst);
	else if (c < b && b < a)
	{
		sa_sb(lst);
		rra_rrb(lst);
	}
	else if (b < c && c < a)
		ra_rb(lst);
	else if (a < c && c < b)
	{
		sa_sb(lst);
		ra_rb(lst);
	}
	else if (c < a && a < b)
		rra_rrb(lst);
}


/*
void	five_n(stack_node *a, stack_node *b)
{
	pa_pb(a, b);
	pa_pb(a, b);
	three_n(a);

}
*/
