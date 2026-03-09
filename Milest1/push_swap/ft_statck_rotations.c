/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_statck_rotations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:33:20 by brportos          #+#    #+#             */
/*   Updated: 2026/03/09 13:27:22 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_rotations(t_list **head)
{
	t_list	*curr;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = *head;
	*head = (*head)->next;
	curr->next->next = NULL;
}