/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rrotation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 07:36:15 by brportos          #+#    #+#             */
/*   Updated: 2026/03/10 11:48:59 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_rrotation(t_stack **head)
{
	t_stack	*prev;
	t_stack	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	prev = *head;
	while (prev->next != NULL)
	{
		last = prev;
		prev = prev->next;
	}
	prev->next = *head;
	last->next = NULL;
	*head = prev;
}
