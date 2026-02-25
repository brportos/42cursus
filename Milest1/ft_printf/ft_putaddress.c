/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:40:07 by brportos          #+#    #+#             */
/*   Updated: 2026/02/20 12:06:14 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putlowhexa(unsigned long long nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (!len)
		return ;
	if (nbr > 15)
		ft_putlowhexa(nbr / 16, len);
	ft_putchar(base[nbr % 16], len);
}

void	ft_putaddress(void *ptr, int *len)
{
	unsigned long long	address;

	if (!ptr || !len)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	address = (unsigned long long)ptr;
	ft_putstr("0x", len);
	ft_putlowhexa(address, len);
}
