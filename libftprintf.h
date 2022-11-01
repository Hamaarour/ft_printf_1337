/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:39:31 by hamaarou          #+#    #+#             */
/*   Updated: 2022/11/01 08:50:24 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		count_nbr(long nbr, int bs);
int		ft_putnbr(int nbr);
int		ft_putnbr_hex(unsigned long nbr, char bs);

size_t	ft_strlen(char *str);

int		ft_printf(const char *str, ...);
#endif
