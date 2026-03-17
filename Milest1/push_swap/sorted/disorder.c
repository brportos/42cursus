/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:31:17 by brportos          #+#    #+#             */
/*   Updated: 2026/03/17 12:03:39 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static double	compute_disorder(t_stack *a)
{
	t_stack	*i;
	int		mistakes;
	int		total_pairs;

	mistakes = 0;
	total_pairs = 0;
	while (a->next)
	{
		i = a->next;
		while (i)
		{
			total_pairs += 1;
			if (a->content > i->content)
				mistakes += 1;
			i = i->next;
		}
		a = a->next;
	}
	if (total_pairs == 0)
		return (0);
	return ((double)mistakes / total_pairs);
}

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
		return ;
	first = (*a)->content;
	second = (*a)->next->content;
	third = (*a)->next->next->content;
	if (first > second && second < third && third > first)
		sa(a);
	else if (first > second && second > third)
	{
		ra(a);
		sa(a);
	}
	else if (first > second && second < third && third < first)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
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

void	sort_five(t_stack **a, t_stack **b)
{
	int	pos;

	if (!a || !(*a))
		return ;
	if (is_sorted(*a) == 1)
		return ;
	while (stack_size(*a) > 3)
	{
		pos = min_position(*a);
		if (pos == 0)
			pb(a, b);
		else if (pos <= stack_size(*a) / 2)
			ra(a);
		else
			rra(a);
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}

void	push_swap(t_stack **a, t_stack **b)
{
	double	disorder;
	int		size;

	disorder = compute_disorder(*a);
	size = stack_size(*a);
	if (repetition_numbers(*a))
		return ((void)write(2, "Error\n", 6), exit(1));
	if (is_sorted(*a) == 1)
		return;
	if (size == 2)
		ra(a);
	else if (size == 3)
		sort_three(a);
	else if (size > 3 && size <= 5)
		sort_five(a, b);
	else
	{
		if (disorder < 0.2)
			selection_sort(a, b);
		else if (disorder <= 0.2 && disorder < 0.5)
			chunk_sort(a, b);
		else
			radix_sort(a, b);
	}
}
