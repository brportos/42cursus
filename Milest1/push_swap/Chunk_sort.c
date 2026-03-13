/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:14:45 by brportos          #+#    #+#             */
/*   Updated: 2026/03/13 12:18:07 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *a)
{
	int	count;

	count = 0;
	while (a)
	{
		count++;
		a = a->next;
	}
	return (count);
}

int	find_max(t_stack *a)
{
	int	max;

	max = a->content;
	while (a)
	{
		if (a->content > max)
			max = a->content;
		a = a->next;
	}
	return (max);
}

void	chunk_sort(t_stack **a, t_stack **b)
{
	int	size;
	int	chunk_size;

	size = stack_size(*a);
	chunk_size = chunck_size(size);
	pb_chunks(a, b, chunk_size);
	while (*b)
	{
		while ((*b)->content != find_max(*b))
			ft_b_rotation(b);
		ft_pa(a, b);
	}
}
