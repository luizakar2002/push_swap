#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	int			data;
	int			chunk;
	struct stack	*next;
}				stack_node;

void		pa_pb(stack_node **from, stack_node **to);
void		sa_sb(stack_node **ptr);
void		ss(stack_node **a, stack_node **b);
void		ra_rb(stack_node **ptr);
void		rr(stack_node **a, stack_node **b);
void		rra_rrb(stack_node **ptr);
void		rrr(stack_node **a, stack_node **b);
stack_node	**new_stack(stack_node **ptr, int *arr, int size);
stack_node	*new_node(int data);
stack_node	*ft_lstlast(stack_node *lst);
void		push(stack_node **lst, int data);
void		pop(stack_node **lst);
int			list_length(stack_node *lst);
int			ft_strlen(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_atoi(const char *str);
int			count_spaces(char *str);
int			*get_ints(char *argv);
int			ft_isdigit(char c);
void		error_exit(int code);
int			only_num(char *str);
void		insertionSort(int *arr, int n);
int			midpoint(int *arr, int n);
void		three_n(stack_node **lst);
int			*data_to_array(stack_node *a);
stack_node	*ft_lstprev(stack_node *lst);
void		divide_a(stack_node **a, stack_node **b);
void		print_stack(stack_node *a);
int			chunk_length(stack_node *a);
void		sort_a(stack_node **a, stack_node **b, int n);
int			sorted(stack_node *a);
stack_node	*chunk_last(stack_node *b);
int			new_chunk_length(stack_node *a);
int			*chunk_to_array(stack_node *b);
void		three_n_dec(stack_node **lst);
void		divide_b(stack_node **a, stack_node **b);
int			is_chunk_2(stack_node *a);
stack_node	*uncomplete_chunk_last(stack_node *a);
int			chunks_length(stack_node *a);
void			ascending_sort(int *arr, int n);

#endif
