/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:07:49 by brportos          #+#    #+#             */
/*   Updated: 2026/03/18 10:39:16 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	move_min_top(t_stack **a)
{
	int	min;
	int	pos;

	min = find_min(*a);
	pos = min_position(*a);
	if (pos < stack_size(*a) / 2)
	{
		while ((*a)->content != min)
			ra(a);
	}
	else
	{
		while ((*a)->content != min)
			rra(a);
	}
}
void	selection_sort(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
	{
		move_min_top(a);
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
