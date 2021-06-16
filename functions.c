#include "push_swap.h"

void	pa_pb(stack_node **from, stack_node **to, char ch)
{
	//if-ery
	push(to, (*from)->data);
	pop(from);
	if (ch == 'a')
		write(1, "pa\n", 3);
	else if (ch == 'b')
		write(1, "pb\n", 3);
}

void	sa_sb(stack_node **ptr, char ch)
{
	int tmp;

	tmp = (*ptr)->data;
	(*ptr)->data = (*ptr)->next->data;
	(*ptr)->next->data = tmp;
	if (ch == 'a')
		write(1, "sa\n", 3);
	else if (ch == 'b')
		write(1, "sb\n", 3);
}

void	ss(stack_node **a, stack_node **b)
{
	sa_sb(a, '0');
	sa_sb(b, '0');
	write(1, "ss\n", 3);
}

void	ra_rb(stack_node **ptr, char ch)
{
	stack_node	*t;
	stack_node	*last;
	
	last = ft_lstlast(*ptr);
	t = *ptr;
	*ptr = (*ptr)->next;
	last->next = t;
	t->next = NULL;
	if (ch == 'a')
		write(1, "ra\n", 3);
	else if (ch == 'b')
		write(1, "rb\n", 3);
}

void	rr(stack_node **a, stack_node **b)
{
	ra_rb(a, '0');
	ra_rb(b, '0');
	write(1, "rr\n", 3);
}

void	rra_rrb(stack_node **ptr, char ch)
{
	stack_node	*last;
	stack_node	*l;

	last = ft_lstlast(*ptr);
	l = ft_lstprev(*ptr);
	l->next = NULL;
	last->next = *ptr;
	*ptr = last;
	if (ch == 'a')
		write(1, "rra\n", 4);
	else if (ch == 'b')
		write(1, "rrb\n", 4);
}

void	rrr(stack_node **a, stack_node **b)
{
	rra_rrb(a, '0');
	rra_rrb(b, '0');
	write(1, "rrr\n", 4);
}
