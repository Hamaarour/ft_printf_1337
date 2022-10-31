/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:46:33 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/31 14:48:44 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_b(int nbr, char *base)
{
	int	length;

	if (check(base) == 0)
		return ;
	length = check(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= length)
	{
		ft_putnbr_b(nbr / length, base);
		ft_putnbr_b(nbr % length, base);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}
int	main(void)
{
	ft_putnbr_b(15, "16");
}
