/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:31:17 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 20:41:29 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

double	compute_disorder(t_stack *a)
{
	int	mistakes;
	int	total_pairs;

	mistakes = 0;
	total_pairs = 0;
	if (!a)
		return (0);
	while (a && a->next)
	{
		if (a->content > a->next->content)
			mistakes++;
		total_pairs++;
		a = a->next;
	}
	return ((double)mistakes / total_pairs);
}

void	sort_three(t_stack **a, t_stats *st)
{
	int	f; // first
	int	s; // second
	int	t; // third

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	f = (*a)->content;
	s = (*a)->next->content;
	t = (*a)->next->next->content;
	if (f > s && s < t && f < t)
		sa(a, st);
	else if (f > s && s > t)
	{
		sa(a, st);
		rra(a, st);
	}
	else if (f > s && s < t && f > t)
		ra(a, st);
	else if (f < s && s > t && f < t)
	{
		sa(a, st);
		ra(a, st);
	}
	else if (f < s && s > t && f > t)
		rra(a, st);
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

void	sort_five(t_stack **a, t_stack **b, t_stats *st)
{
	int	pos;

	if (!a || !*a || is_sorted(*a))
		return ;
	while (stack_size(*a) > 3)
	{
		pos = min_position(*a);
		if (pos == 0)
			pb(a, b, st);
		else if (pos <= stack_size(*a) / 2)
			ra(a, st);
		else
			rra(a, st);
	}
	sort_three(a, st);
	pa(a, b, st);
	pa(a, b, st);
}

void	adaptive(t_stack **a, t_stack **b, t_stats *st)
{
	double	disorder;
	int		size;

	size = stack_size(*a);
	if (is_sorted(*a))
		return ;
	if (size == 2)
		sa(a, st);
	else if (size == 3)
		sort_three(a, st);
	else if (size <= 5)
		sort_five(a, b, st);
	else if (size <= 15)
		sort_small(a, b, st);
	else
	{
		disorder = compute_disorder(*a);
		if (disorder < 0.2)
			selection_sort(a, b, st);
		else if (disorder < 0.5)
			chunk_sort(a, b, st);
		else
			radix_sort(a, b, st);
	}
}
