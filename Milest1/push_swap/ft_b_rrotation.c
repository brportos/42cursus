/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_rrotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:45:11 by brportos          #+#    #+#             */
/*   Updated: 2026/03/10 11:33:02 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_b_rrotation(t_stack **head)
{
	ft_stack_rrotation(head);
	write(1, "rrb\n", 4);
}
