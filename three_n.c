/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:51:31 by lukarape          #+#    #+#             */
/*   Updated: 2021/07/27 14:51:32 by lukarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		sa_sb(lst, 'a');
	else if (c < b && b < a)
	{
		sa_sb(lst, 'a');
		rra_rrb(lst, 'a');
	}
	else if (b < c && c < a)
		ra_rb(lst, 'a');
	else if (a < c && c < b)
	{
		sa_sb(lst, 'a');
		ra_rb(lst, 'a');
	}
	else if (c < a && a < b)
		rra_rrb(lst, 'a');
}


/*
void	five_n(stack_node *a, stack_node *b)
{
	pa_pb(a, b);
	pa_pb(a, b);
	three_n(a);

}
*/
