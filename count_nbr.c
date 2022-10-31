/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:53:42 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/31 14:48:19 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	count_nbr(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		count++;
		return (count);
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
