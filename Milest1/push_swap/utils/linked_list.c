/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:37:46 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 20:12:11 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*node;

	node = malloc(sizeof *node);
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
static t_stack	*ft_stacklast(t_stack *lst)
{
	t_stack	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst && new)
	{
		*lst = new;
		return ;
	}
	if (!new &&lst)
		return ;
	if (!lst && !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_stacklast(*lst);
		last->next = new;
	}
}

void	print_stack(t_stack *a)
{
	while (a != NULL)
	{
		ft_printf("%d ", a->content);
		a = a->next;
	}
	ft_printf("\n");
}
void	print_bench(int flags, t_stack *a, t_stats *st)
{
	double	disorder;

	if (!(flags & F_BENCH))
		return ;
	disorder = compute_disorder(a);
	write(2, "\n--- PUSH_SWAP BENCHMARK ---\n", 29);
	write(2, "[bench] disorder: ", 18);
	ft_float(disorder * 100); // Assuming your ft_float writes to FD 2
	write(2, "%\n", 2);
	ft_putstr_fd("[bench] strategy: Adaptive / O(n√n)\n", 2);
	ft_printf("[bench] total_ops: %d\n", st->total);
	ft_printf("[bench] sa: %d | sb: %d | ss: %d\n", st->sa, st->sb, st->ss);
	ft_printf("[bench] pa: %d | pb: %d\n", st->pa, st->pb);
	ft_printf("[bench] ra: %d | rb: %d | rr: %d\n", st->ra, st->rb, st->rr);
	ft_printf("[bench] rra:%d | rrb:%d | rrr:%d\n", st->rra, st->rrb, st->rrr);
	write(2, "----------------------------\n", 29);
}


