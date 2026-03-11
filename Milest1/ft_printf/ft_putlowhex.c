/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:43:58 by brportos          #+#    #+#             */
/*   Updated: 2026/02/20 12:06:24 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlowhex(unsigned int nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (!len)
		return ;
	if (nbr > 15)
		ft_putlowhex(nbr / 16, len);
	ft_putchar(base[nbr % 16], len);
}
