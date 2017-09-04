/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extragere_numar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 15:22:33 by cman              #+#    #+#             */
/*   Updated: 2017/08/27 20:08:13 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_functions.h"

int		extragere_numar(char **str)
{
	int num;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		num = operatii_grad_unu(str);
		if (**str == ')')
			(*str)++;
		return (num);
	}
	return (ft_atoi(str));
}
