/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:25:06 by brportos          #+#    #+#             */
/*   Updated: 2026/02/19 10:07:49 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_conversion(va_list *ap, char *str, int *len);
size_t	ft_strlen(const char *s);
void	ft_putaddress(void *ptr, int *len);
void	ft_putlowhex(unsigned int nbr, int *len);
void	ft_putunnbr(unsigned int nbr, int *len);
void	ft_putuphex(unsigned int nbr, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putchar(char c, int *len);

#endif
