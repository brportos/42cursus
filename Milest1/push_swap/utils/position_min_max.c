/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_min_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:02:43 by brportos          #+#    #+#             */
/*   Updated: 2026/03/18 12:06:31 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_position(t_stack *b)
{
	int	max;
	int	pos;
	int	i;

	max = find_max(b);
	pos = 0;
	i = 0;
	if (!b)
		return (0);
	while (b)
	{
		if (b->content == max)
		{
			pos = i;
			break ;
		}
		i++;
		b = b->next;
	}
	return (pos);
}
int	min_position(t_stack *a)
{
	int	min;
	int	pos;
	int	i;

	min = find_min(a);
	pos = 0;
	i = 0;
	if (!a)
		return (0);
	while (a)
	{
		if (a->content == min)
		{
			pos = i;
			break ;
		}
		i++;
		a = a->next;
	}
	return (pos);
}
