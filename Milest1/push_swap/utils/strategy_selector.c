/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_selector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:58:30 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 15:57:43 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_flags(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac && av[i])
	{
		if (ft_strcmp(av[i], "--simple") == 0 || ft_strcmp(av[i],
				"--medium") == 0 || ft_strcmp(av[i], "--complex") == 0
			|| ft_strcmp(av[i], "--adaptive") == 0 || ft_strcmp(av[i],
				"--bench") == 0)
			return (1);
		i++;
	}
	return (0);
}
void	apply_flag_strategy(int ac, char **av, t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	if (is_flags(ac, av) == 1)
	{
		if (ft_strcmp(av[i], "--simple") == 0)
			selection_sort(a, b);
		else if (ft_strcmp(av[i], "--medium") == 0)
			chunk_sort(a, b);
		else if (ft_strcmp(av[i], "--complex") == 0)
			radix_sort(a, b);
	}
}
