#include "push_swap.h"

stack_node	*pa_pb(stack_node *from, stack_node *to)
{
	//if ()
	to = push(to, from->data);
	from = pop(from);
	return (from);
}

void	sa_sb(stack_node *ptr)//swap two top elements of the stack
{
	int tmp;

	tmp = ptr->data;
	ptr->data = ptr->next->data;
	ptr->next->data = tmp;
}

void	ss(stack_node *a, stack_node *b)
{
	sa_sb(a);
	sa_sb(b);
}

void	ra_rb(stack_node *ptr)
{
	stack_node	*last;

	last = ft_lstlast(ptr);
	ptr = ptr->next;
}

void	rr(stack_node *a, stack_node *b)
{
	ra_rb(a);
	ra_rb(b);
}

void	rra_rrb(stack_node *ptr)
{
	stack_node	*last;

	last = ft_lstlast(ptr);
	last->next = ptr;
	ptr = last;
	last = NULL;
}

void	rrr(stack_node *a, stack_node *b)
{
	rra_rrb(a);
	rra_rrb(b);
}
