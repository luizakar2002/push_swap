#ifndef STRUCT_H
# define STRUCT_H

stack_node	*new_stack(int *arr, int size);
stack_node	*new_node(int data);
stack_node	*ft_lstlast(stack_node *lst);
stack_node	*push(stack_node *lst, int data);
stack_node	*pop(stack_node *lst);
int			list_length(stack_node *lst);

#endif
