/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:46:06 by hamaarou          #+#    #+#             */
/*   Updated: 2022/11/01 14:31:58 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>


int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		c;

	c = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i+1] == 'c')
		{
			ft_putchar(va_arg(args, int));
		}
	}



	va_end(args);
	return (1);
}
