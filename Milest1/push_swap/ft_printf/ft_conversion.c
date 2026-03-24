/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:16:45 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 10:15:58 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_float(double n)
{
	long	nb;
	int		i;
	int len;

	nb = (long)n;
	i = 0;
	len = 0;
	if (n < 0)
	{
		ft_putchar('-', &len);
		n = n * (-1);
	}
	ft_putnbr(nb, &len);
	ft_putchar('.', &len);
	n = n - nb;
	while (i < 2)
	{
		n = n * 10;
		ft_putchar((int)n + '0', &len);
		n = n - (int)n;
		i++;
	}
	return (len);
}

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
	else if (*str == 'f')
		ft_float(va_arg(*ap, double));
	return ;
}
