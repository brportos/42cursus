/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rrotation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 07:36:15 by brportos          #+#    #+#             */
/*   Updated: 2026/03/22 11:07:48 by brportos         ###   ########.fr       */
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
