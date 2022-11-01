# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 11:28:01 by hamaarou          #+#    #+#              #
#    Updated: 2022/11/01 10:14:15 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS =-Wall -Wextra -Werror

SRC= 	count_nbr.c ft_putchar.c ft_putnbr.c ft_putstr.c  \
		ft_strlen.c ft_putnbr_hex.c ft_printf.c


OBJ= 	count_nbr.o ft_putchar.o  ft_putnbr.o ft_putstr.o   \
		ft_strlen.o ft_putnbr_hex.o  ft_printf.o

.PHONY = all clean fclean re


all:$(NAME)

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):$(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all
