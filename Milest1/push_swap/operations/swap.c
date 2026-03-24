/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:28:58 by herinaan          #+#    #+#             */
/*   Updated: 2026/03/24 20:35:04 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	stack_swap(t_stack **stack)
{
	int	tmp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	sa(t_stack **a, t_stats *st)
{
	stack_swap(a);
	write(1, "sa\n", 3);
	if (st)
	{
		st->sa++;
		st->total++;
	}
}

void	sb(t_stack **b, t_stats *st)
{
	if (!b || !*b || !(*b)->next)
		return ;
	stack_swap(b);
	write(1, "sb\n", 3);
	if (st)
	{
		st->sb++;
		st->total++;
	}
}

void	ss(t_stack **a, t_stack **b, t_stats *st)
{
	if ((!a || !*a || !(*a)->next) && (!b || !*b || !(*b)->next))
		return ;
	stack_swap(a);
	stack_swap(b);
	write(1, "ss\n", 3);
	if (st)
	{
		st->ss++;
		st->total++;
	}
}
