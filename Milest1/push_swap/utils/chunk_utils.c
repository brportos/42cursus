/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:57:46 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 20:52:02 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sqr(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i - 1);
}

void	sort_small(t_stack **a, t_stack **b, t_stats *st)
{
	int	pos;
	int	size;

	if (!a || !*a || is_sorted(*a))
		return ;
	while (stack_size(*a) > 5)
	{
		pos = min_position(*a);
		size = stack_size(*a);
		if (pos == 0)
			pb(a, b, st);
		else if (pos <= size / 2)
			ra(a, st);
		else
			rra(a, st);
	}
	sort_five(a, b, st);
	while (*b)
		pa(a, b, st);
}

void	pb_chunks(t_stack **a, t_stack **b, int chunk_size, t_stats *st)
{
	int	pushed;

	pushed = 0;
	while (*a)
	{
		if ((*a)->index <= pushed)
		{
			pb(a, b, st);
			rb(b, st);
			pushed++;
		}
		else if ((*a)->index <= pushed + chunk_size)
		{
			pb(a, b, st);
			pushed++;
		}
		else
			ra(a, st);
	}
}
