#ifndef STRUCT_H
# define STRUCT_H

stack_node	*new_stack(int *arr, int size);
stack_node	*new_node(int data);
stack_node	*ft_lstlast(stack_node *lst);
void		push(stack_node **lst, int data);
int			pop(stack_node **lst);

#endif
