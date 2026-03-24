/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rmquote.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 09:00:35 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 19:50:06 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	handle_flags(char *str, int *flags)
{
	if (ft_strcmp(str, "--simple") == 0)
		return (*flags |= SIMPLE, 1);
	if (ft_strcmp(str, "--medium") == 0)
		return (*flags |= MEDIUM, 1);
	if (ft_strcmp(str, "--bench") == 0)
		return (*flags |= BENCH, 1);
	return (0);
}
void	parse_multi_args(t_stack **a, int ac, char **av, int *flags)
{
	int		i;
	int		err;
	long	n;

	i = 1;
	while (i < ac)
	{
		if (handle_flags(av[i], flags))
			i++;
		n = ft_atoi_strict(av[i], &err);
		ft_stackadd_back(a, ft_stacknew((int)n));
		i++;
	}
}
void	apply_sorting_strategy(t_stack **a, t_stack **b, int flags)
{
	if (flags & BENCH)
	
	if (flags & F_SIMPLE)
		sort_three(a);
	else if (flags & F_MEDIUM)
		sort_medium(a, b);
	else if (flags & F_COMPLEX)
		sort_large_stack(a, b);
	else
		sort_default(a, b); // Your most efficient algorithm
}

void	isdoublequoted(t_stack **a, char **av, int *flags)
{
	int		i;
	int		n;
	char	**split;

	split = ft_split(av[1], ' ');
	i = 0;
	while (split && split[i])
	{
		if (handle_flags(split[i], flags))
			i++;
		n = ft_atoi(split[i]);
		ft_stackadd_back(a, ft_stacknew(n));
		i++;
	}
}

void	isunquoted(t_stack **a, int ac, char **av)
{
	int	n;
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (j == 0 && (av[i][j] == '-' || av[i][j] == '+'))
				j++;
			if (!ft_isdigit(av[i][j]))
			{
				write(2, "error\n", 6);
				exit(1);
			}
			j++;
		}
		n = ft_atoi(av[i]);
		ft_stackadd_back(a, ft_stacknew(n));
		i++;
	}
}
