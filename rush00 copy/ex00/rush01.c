/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:54:36 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/09 12:55:52 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	ft_print(int x, char a, char b, char c)
{
	int	counter;

	counter = 1;
	if (counter == 1)
	{
		ft_putchar(a);
		counter++;
	}
	while (counter > 1 && counter < x)
	{
		ft_putchar(b);
		counter++;
	}
	if (counter == x)
	{
		ft_putchar(c);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	counter;

	counter = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Introduzca dos valores mayores a 0\n", 36);
	}
	if (x > 0 && y > 0)
	{
		counter = 1;
	}
	if (counter == 1)
	{
		ft_print(x, '/', '*', '\\');
		counter++;
	}
	while (counter > 1 && counter < y)
	{
		ft_print(x, '*', ' ', '*');
		counter++;
	}
	if (counter == y && counter > 0)
	{
		ft_print(x, '\\', '*', '/');
	}
}
