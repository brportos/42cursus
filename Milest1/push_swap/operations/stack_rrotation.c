/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rrotation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 07:36:15 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 20:28:34 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	stack_rrotation(t_stack **a)
{
	t_stack	*last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	while (last->next->next != NULL)
		last = last->next;
	last->next->next  = *a;
	*a = last->next;
	last->next = NULL;
}

void	rra(t_stack **a, t_stats *st)
{
	stack_rrotation(a);
	write(1, "rra\n", 4);
	if (st)
	{
		st->rra++;
		st->total++;
	}
}

void	rrb(t_stack **b, t_stats *st)
{
	if (!b || !*b || !(*b)->next)
		return ;
	stack_rrotation(b);
	write(1, "rrb\n", 4);
	if (st)
	{
		st->rrb++;
		st->total++;
	}
}

void	rrr(t_stack **a, t_stack **b, t_stats *st)
{
	int	rotated;

	rotated = 0;
	if (a && *a && (*a)->next)
	{
		stack_rrotation(a);
		rotated = 1;
	}
	if (b && *b && (*b)->next)
	{
		stack_rrotation(b);
		rotated = 1;
	}
	if (rotated)
	{
		write(1, "rrr\n", 4);
		if (st)
		{
			st->rrr++;
			st->total++;
		}
	}
}
