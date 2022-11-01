/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:46:06 by hamaarou          #+#    #+#             */
/*   Updated: 2022/11/01 21:42:00 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>
int	prnt_second(va_list args, char k)
{
	int	c;

	c = 0;
	if (k == 'c')
		c += ft_putchar(va_arg(args, int));
	else if (k == 's')
		c += ft_putstr(va_arg(args, char *));
	else if (k == 'd')
		c += ft_putnbr(va_arg(args, unsigned long));
	else if (k == 'i')
		c += ft_putnbr(va_arg(args, unsigned long));
	else if (k == 'x')
		c += ft_putnbr_hex(va_arg(args, unsigned long), 'x');
	else if (k == 'X')
		c += ft_putnbr_hex(va_arg(args, unsigned long), 'X');
	else if (k == '%')
		c += ft_putchar('%');
	return (c);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int 	i;
	int 	k;

	i = 0;
	k = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			k += prnt_second(args, str[i + 1]);
		if (str[i] != '%')
			k += ft_putchar(str[i + 1]);
		i++;
	}
	va_end(args);
	return (k);
}
