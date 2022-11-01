/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:46:06 by hamaarou          #+#    #+#             */
/*   Updated: 2022/11/01 18:56:26 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>


int	ft_printf(const char *str, ...)
{
	va_list	args;       
	int		i;
	int		c;

	c = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i+1] == 'c')
			c += ft_putchar(va_arg(args, int));
		else if (str[i] == '%' && str[i+1] == 's')
			c += ft_putstr(va_arg(args, char *));
		else if (str[i] == '%' && str[i+1] == 'd')
			c += ft_putnbr(va_arg(args, unsigned long));
		else if (str[i] == '%' && str[i+1] == 'i')
			c += ft_putnbr(va_arg(args, unsigned long));
			
	}
	va_end(args);
	return (1);
}
