/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rrotation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 07:36:15 by brportos          #+#    #+#             */
/*   Updated: 2026/03/16 10:33:20 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	stack_rrotation(t_stack **a)
{
	t_stack	*prev;
	t_stack	*last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	prev = *a;
	while (prev->next != NULL)
	{
		last = prev;
		prev = prev->next;
	}
	prev->next = *a;
	last->next = NULL;
	*a = prev;
}

void	rra(t_stack **a)
{
	stack_rrotation(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **a)
{
	stack_rrotation(a);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	stack_rrotation(a);
	stack_rrotation(b);
	write(1, "rrr\n", 4);
}
