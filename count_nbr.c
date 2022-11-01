/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:53:42 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/31 21:44:50 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	count_nbr(long nbr, int bs)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
	}
	if (nbr == 0)
	{
		count++;
		return (count);
	}
	while (nbr != 0)
	{
		nbr /= bs;
		count++;
	}
	return (count);
}
