/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:46:06 by hamaarou          #+#    #+#             */
/*   Updated: 2022/11/02 13:13:01 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	prnt_second(va_list args, char *k)
{
	int	c;

	c = 0;
	if (*(k + 1) == 'c')
		c = ft_putchar(va_arg(args, int));
	if (*(k + 1) == 's')
		c = ft_putstr(va_arg(args, char *));
	if (*(k + 1) == 'd')
		c = ft_putnbr(va_arg(args, int));
	if (*(k + 1) == 'i')
		c = ft_putnbr(va_arg(args, int));
	if (*(k + 1) == 'x')
		c = ft_putnbr_hex(va_arg(args, unsigned int), 'x');
	if (*(k + 1) == 'X')
		c = ft_putnbr_hex(va_arg(args, unsigned int), 'X');
	if (*(k + 1) == '%')
		c = ft_putchar('%');
	if (*(k + 1) == 'p')
	{
		c = ft_putstr("0x");
		c = ft_putnbr_hex(va_arg(args, unsigned long), 'x');
	}
	return (c);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		k;

	i = 0;
	k = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			k = prnt_second(args, (1));
			i += 2;
		}
		else
			k = ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (k);
}
// line 59 protection in user enter a percent in the last %s %d '%'
// if (str[i] == '\0')
// 	break ;