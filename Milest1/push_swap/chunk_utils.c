/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:57:46 by brportos          #+#    #+#             */
/*   Updated: 2026/03/15 11:51:08 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int nb)
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

int	chunck_size(int size)
{
	int	sqr;

	sqr = ft_sqrt(size);
	return (sqr);
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
