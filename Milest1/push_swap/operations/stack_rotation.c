/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:33:20 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 20:21:17 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	stack_rotation(t_stack **a)
{
	t_stack	*last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	last->next = *a;
	*a = (*a)->next;
	last->next->next = NULL;
}
void	ra(t_stack **a, t_stats *st)
{
	if (!a || !*a || !(*a)->next)
		return ;
	stack_rotation(a);
	write(1, "ra\n", 3);
	if (st)
	{
		st->ra++;
		st->total++;
	}
}

void	rb(t_stack **b, t_stats *st)
{
	if (!b || !*b || !(*b)->next)
		return ;
	stack_rotation(b);
	write(1, "rb\n", 3);
	if (st)
	{
		st->rb++;
		st->total++;
	}
}
void	rr(t_stack **a, t_stack **b, t_stats *st)
{
	if ((!a || !*a || !(*a)->next) && (!b || !*b || !(*b)->next))
		return ;
	stack_rotation(a);
	stack_rotation(b);
	write(1, "rr\n", 3);
	if (st)
	{
		st->rr++;
		st->total++;
	}
}