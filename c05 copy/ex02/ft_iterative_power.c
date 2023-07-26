/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:20:49 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/20 17:35:40 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	else if (nb == 1)
		return (nb);
	if ((nb > 1) || (nb < 0))
	{
		while (power > 1)
		{
			result = result * nb;
			power--;
		}
	}
	return (result);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
