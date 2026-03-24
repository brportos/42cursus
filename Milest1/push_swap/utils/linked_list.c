/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:37:46 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 12:04:19 by brportos         ###   ########.fr       */
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
void	print_bench(t_select *cfg, t_stack *a)
{
	(void)cfg;
	double	disorder;

	disorder = compute_disorder(a);
	write(2, "[bench] disorder: ", 19);
	ft_float(disorder * 100);
	write(2, "\n", 1);
	ft_putstr_fd("[bench] strategy: Adaptive", 2);
	ft_float(disorder * 100);
	write(2, "\n", 1);
	write(2, "[bench] disorder: ", 19);
	ft_float(disorder * 100);
	write(2, "\n", 1);
	write(2, "[bench] disorder: ", 19);
	ft_float(disorder * 100);
	write(2, "\n", 1);
}
