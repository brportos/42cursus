/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_and_b_rrotation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:46:41 by brportos          #+#    #+#             */
/*   Updated: 2026/03/10 11:47:21 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_a_and_b_rrotation(t_stack **a_head, t_stack **b_head)
{
	ft_stack_rotation(a_head);
	ft_stack_rotation(b_head);
	write(1, "rrr\n", 4);
}
