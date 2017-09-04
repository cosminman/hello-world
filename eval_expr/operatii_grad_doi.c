/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatii_grad_doi.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cman <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 19:40:17 by cman              #+#    #+#             */
/*   Updated: 2017/08/27 20:08:43 by cman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_functions.h"

int		operatii_grad_doi(char **str)
{
	int		num1;
	int		num2;
	char	operatie;

	num1 = extragere_numar(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		operatie = **str;
		if (operatie != '/' && operatie != '*' && operatie != '%')
			return (num1);
		(*str)++;
		num2 = extragere_numar(str);
		if (operatie == '%')
			num1 = modulo(num1, num2);
		if (operatie == '*')
			num1 = inmultire(num1, num2);
		if (operatie == '/')
			num1 = impartire(num1, num2);
	}
	return (num1);
}
