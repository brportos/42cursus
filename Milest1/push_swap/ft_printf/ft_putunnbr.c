/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:44:19 by brportos          #+#    #+#             */
/*   Updated: 2026/02/20 12:06:37 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunnbr(unsigned int nbr, int *len)
{
	if (!len)
		return ;
	if (nbr >= 10)
	{
		ft_putunnbr(nbr / 10, len);
		ft_putunnbr(nbr % 10, len);
	}
	else
		ft_putchar(nbr + '0', len);
}
