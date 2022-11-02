/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:55:43 by hamaarou          #+#    #+#             */
/*   Updated: 2022/11/02 10:50:59 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;
	char	*n;

	n = "(null)";
	i = 0;
	if (!str)
		return (ft_putstr(n));
	while (str[i])
		write(1, &str[i++], 1);
	return (ft_strlen(str));
}
