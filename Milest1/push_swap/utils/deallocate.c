/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:13:48 by brportos          #+#    #+#             */
/*   Updated: 2026/03/17 11:51:52 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackclear(t_stack **a, void (*del)(int))
{
	t_stack	*tmp;
	t_stack	*top;

	if (!a || !*a || !del)
		return ;
	top = *a;
	while (top)
	{
		tmp = (top)->next;
		del((top)->content);
		free(top);
		top = tmp;
	}
	*a = NULL;
}
int	repetition_numbers(t_stack *a)
{
	t_stack	*j;

	while (a)
	{
		j = a->next;
		while (j)
		{
			if (a->content == j->content)
				return (1);
			j = j->next;
		}
		a = a->next;
	}
	return (0);
}
