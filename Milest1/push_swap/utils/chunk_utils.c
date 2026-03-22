/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:57:46 by brportos          #+#    #+#             */
/*   Updated: 2026/03/22 14:14:41 by brportos         ###   ########.fr       */
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

void	sort_small(t_stack **a, t_stack **b)
{
	int	size;
	int	pos;

	if (!a || !(*a) || is_sorted(*a))
		return ;
	size = stack_size(*a);
	while (size > 5)
	{
		pos = min_position(*a);
		if (pos == 0)
		{
			pb(a, b);
			size--;
		}
		else if (pos <= size / 2)
			ra(a);
		else
			rra(a);
	}
	sort_five(a, b);
	while (*b)
		pa(a, b);
}

void	pb_chunks(t_stack **a, t_stack **b, int chunk_size)
{
	int	pushed;

	pushed = 0;
	while (*a)
	{
		if ((*a)->index <= pushed)
		{
			pb(a, b);
			rb(b);
			pushed++;
		}
		else if ((*a)->index <= pushed + chunk_size)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
	}
}
