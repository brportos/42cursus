/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:37:46 by brportos          #+#    #+#             */
/*   Updated: 2026/03/15 12:59:46 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../ft_printf/ft_printf.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*node;

	node = malloc(sizeof * node);
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
t_stack	*ft_stacklast(t_stack *lst)
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
	if (!new && lst)
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