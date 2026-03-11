/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:07:49 by brportos          #+#    #+#             */
/*   Updated: 2026/03/11 16:19:18 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack *a)
{
	int	min;

	min = a->content;
	while (a)
	{
		if (a->content < min)
			min = a->content;
		a = a->next;
	}
	return (min);
}
void	move_min_top(t_stack **a)
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