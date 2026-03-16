/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:07:49 by brportos          #+#    #+#             */
/*   Updated: 2026/03/16 10:57:36 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	move_min_top(t_stack **a)
{
	int	min;

	min = find_min(*a);
	while ((*a)->content != min)
		ra(a);
}
void	selection_sort(t_stack **a, t_stack **b)
{
	while (*a)
	{
		move_min_top(a);
		pb(a, b);
	}
	while (*b)
		pa(a, b);
}
