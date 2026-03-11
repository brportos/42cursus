/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:28:58 by herinaan          #+#    #+#             */
/*   Updated: 2026/03/10 11:17:30 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	int		tmp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	tmp = first->content;
	first->content = second->content;
	second->content = tmp;
}
