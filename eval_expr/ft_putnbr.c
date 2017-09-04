/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 15:52:50 by cman              #+#    #+#             */
/*   Updated: 2017/08/27 20:08:22 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_functions.h"

void	ft_putnbr(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		ft_putnbr(-number);
		return ;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
}
