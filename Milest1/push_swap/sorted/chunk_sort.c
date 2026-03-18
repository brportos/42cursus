/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:14:45 by brportos          #+#    #+#             */
/*   Updated: 2026/03/18 12:05:11 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_size(t_stack *a)
{
	int	count;

	count = 0;
	if (!a)
		return (0);
	while (a)
	{
		count++;
		a = a->next;
	}
	return (count);
}

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
	return (i -1);
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

void	chunk_sort(t_stack **a, t_stack **b)
{
	int	size;
	int	sqr_size;
	int	pos;

	if (!*a)
		return ;
	size = stack_size(*a);
	sqr_size = ft_sqr(size);
	pb_chunks(a, b, sqr_size);
	while (*b)
	{
		pos = max_position(*b);
		if (pos < stack_size(*a))
		{
			while ((*b)->content != find_max(*b))
				rb(b);
		}
		// else
		// {
		// 	while ((*b)->content != find_max(*b))
		// 		rb(b);
		// }
		pa(a, b);
	}
}

