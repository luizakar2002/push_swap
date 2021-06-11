#include "push_swap.h"

void	pa_pb(stack_node **from, stack_node **to)
{
	//if ()i
	push(to, (*from)->data);
	pop(from);
}

void	sa_sb(stack_node **ptr)//swap two top elements of the stack
{
	int tmp;

	tmp = (*ptr)->data;
	(*ptr)->data = (*ptr)->next->data;
	(*ptr)->next->data = tmp;
}

void	ss(stack_node **a, stack_node **b)
{
	sa_sb(a);
	sa_sb(b);
}

void	ra_rb(stack_node **ptr)
{
	stack_node	*t;
	stack_node	*last;
	
	last = ft_lstlast(*ptr);
	t = *ptr;
	*ptr = (*ptr)->next;
	last->next = t;
	t->next = NULL;
}

void	rr(stack_node **a, stack_node **b)
{
	ra_rb(a);
	ra_rb(b);
}

void	rra_rrb(stack_node **ptr)
{
	stack_node	*last;
	stack_node	*l;

	last = ft_lstlast(*ptr);
	l = ft_lstprev(*ptr);
	l->next = NULL;
	last->next = *ptr;
	*ptr = last;
}

void	rrr(stack_node **a, stack_node **b)
{
	rra_rrb(a);
	rra_rrb(b);
}
