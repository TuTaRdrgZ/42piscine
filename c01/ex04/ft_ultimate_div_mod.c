/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:54:04 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/13 09:19:39 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	x;
	int	y;

	x = 42;
	y = 10;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
	return (0);
}*/
