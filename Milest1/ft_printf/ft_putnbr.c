/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:44:06 by brportos          #+#    #+#             */
/*   Updated: 2026/02/20 12:06:28 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (!len)
		return ;
	if (nbr == -2147483648)
		ft_putstr("-2147483648", len);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		(*len)++;
		ft_putnbr(nbr, len);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
	else
		ft_putchar(nbr + '0', len);
}
