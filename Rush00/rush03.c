/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:13:42 by fbulz             #+#    #+#             */
/*   Updated: 2017/08/12 20:04:26 by fbulz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	linie(int x)
{
	int o;

	o = 2;
	ft_putchar('A');
	while (o <= x)
	{
		if (o != 1 && o < x)
			ft_putchar('B');
		o++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	coloana(int x, int y)
{
	int v;
	int o;

	v = 2;
	linie(x);
	while (v < y)
	{
		o = 2;
		ft_putchar('B');
		while (o <= x)
		{
			if ((o > 1) && (o < x))
				ft_putchar(' ');
			if (o == x)
				ft_putchar('B');
			o++;
		}
		ft_putchar('\n');
		v++;
	}
	linie(x);
}

void	rush03(int x, int y)
{
	int v;

	v = y;
	if (x > 0)
	{
		if (v == 1)
			linie(x);
		if (v == 2)
		{
			linie(x);
			linie(x);
		}
		if (v > 2)
			coloana(x, y);
	}
}
