/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_rotation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:49:30 by brportos          #+#    #+#             */
/*   Updated: 2026/03/10 11:31:00 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_b_rotation(t_stack **head)
{
	ft_stack_rotation(head);
	write(1, "rb\n", 3);
}
