/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:07:49 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 20:45:33 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	move_min_top(t_stack **a, t_stats *st)
{
	int	min;
	int	pos;
	int	size;

	if (!a || !*a || !(*a)->next)
		return ;
	min = find_min(*a);
	pos = min_position(*a);
	size = stack_size(*a);
	if (pos <= size / 2)
	{
		while ((*a)->content != min)
			ra(a, st);
	}
	else
	{
		while ((*a)->content != min)
			rra(a, st);
	}
}
void	selection_sort(t_stack **a, t_stack **b, t_stats *st)
{
	if (!a || !*a || is_sorted(*a))
		return ;
	while (stack_size(*a) > 3)
	{
		move_min_top(a, st);
		pb(a, b, st);
	}
	sort_three(a, st);
	while (*b)
		pa(a, b, st);
}
