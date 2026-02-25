/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:16:45 by brportos          #+#    #+#             */
/*   Updated: 2026/02/20 12:05:48 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion(va_list *ap, char *str, int *len)
{
	if (!len || !str || !ap)
		return ;
	if (*str == 'c')
		ft_putchar(va_arg(*ap, int), len);
	else if (*str == 's')
		ft_putstr(va_arg(*ap, char *), len);
	else if (*str == 'p')
		ft_putaddress(va_arg(*ap, void *), len);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr((int)va_arg(*ap, int), len);
	else if (*str == 'u')
		ft_putunnbr(va_arg(*ap, unsigned int), len);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_putlowhex(va_arg(*ap, unsigned int), len);
		else
			ft_putuphex(va_arg(*ap, unsigned int), len);
	}
	else if (*str == '%')
		ft_putchar(*str, len);
	return ;
}
