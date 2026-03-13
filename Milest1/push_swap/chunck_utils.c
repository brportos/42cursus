/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:57:46 by brportos          #+#    #+#             */
/*   Updated: 2026/03/13 12:25:21 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int nb)
{
	int	res;
	int	i;

	i = 1;
	res = 0;
	if (nb <= 0)
		return (0);
	while (i < nb)
	{
		if (i * i == nb)
		{
			res = i;
			return (res);
		}
		else if (i * i > nb)
			return (i - 1);
		i++;
	}
	return (0);
}

int	chunck_size(int size)
{
	int	sqr;

	sqr = ft_sqrt(size);
	return (sqr);
}

void	pb_chunks(t_stack **a, t_stack **b, int chunk_size)
{
	int pushed;

	pushed = 0;
	while (*a)
	{
		if ((*a)->index <= pushed)
		{
			ft_pb(a, b);
			ft_b_rotation(b);
			pushed++;
		}
		else if ((*a)->index <= pushed + chunk_size)
		{
			ft_pb(a, b);
			pushed++;
		}
		else
			ft_a_rotation(a);
	}
}
