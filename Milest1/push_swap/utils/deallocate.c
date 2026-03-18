/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:13:48 by brportos          #+#    #+#             */
/*   Updated: 2026/03/18 09:36:56 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	del_content(int n)
{
	(void)n;
}
void	ft_stackclear(t_stack **a, void (*del)(int))
{
	t_stack	*tmp;

	if (!a || !*a || !del)
		return ;
	while (*a)
	{
		tmp = (*a)->next;
		del((*a)->content);
		free(*a);
		*a = NULL;
		*a = tmp;
	}
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
