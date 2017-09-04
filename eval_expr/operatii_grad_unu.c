/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatii_grad_unu.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 17:55:33 by cman              #+#    #+#             */
/*   Updated: 2017/08/27 20:09:17 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_functions.h"

int		operatii_grad_unu(char **str)
{
	int		num1;
	int		num2;
	char	operatie;

	num1 = operatii_grad_doi(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		operatie = **str;
		if (operatie != '+' && operatie != '-')
			return (num1);
		(*str)++;
		num2 = operatii_grad_doi(str);
		if (operatie == '+')
			num1 = adunare(num1, num2);
		else if (operatie == '-')
			num1 = scadere(num1, num2);
	}
	return (num1);
}
