/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 17:20:13 by cman              #+#    #+#             */
/*   Updated: 2017/08/27 20:09:52 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_FUNCTIONS_H
# define MY_FUNCTIONS_H

int		operatii_grad_unu(char **expr);
void	ft_putchar(char c);
int		ft_atoi(char **str);
void	ft_putnbr(int number);
int		operatii_grad_doi(char **expr);
int		extragere_numar(char **expr);
int		eval_expr(char *expr);
int		adunare(int a, int b);
int		scadere(int a, int b);
int		inmultire(int a, int b);
int		impartire(int a, int b);
int		modulo(int a, int b);

#endif
