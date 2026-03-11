/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_and_b_rotation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:50:24 by brportos          #+#    #+#             */
/*   Updated: 2026/03/10 11:30:25 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_a_and_b_rotation(t_stack **a_head, t_stack **b_head)
{
	ft_stack_rotation(a_head);
	ft_stack_rotation(b_head);
	write(1, "rr\n", 3);
}
