# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cman <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 13:06:22 by cman              #+#    #+#              #
#    Updated: 2017/08/27 20:08:06 by cman             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC += main.c
SRC += ft_putchar.c
SRC += modulo.c
SRC += adunare.c
SRC += ft_putnbr.c
SRC += eval_expr.c
SRC += impartire.c
SRC += operatii_grad_doi.c
SRC += extragere_numar.c
SRC += inmultire.c
SRC += operatii_grad_unu.c
SRC += ft_atoi.c
SRC += scadere.c


all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean: clean
		rm -f $(NAME)

re: clean all
