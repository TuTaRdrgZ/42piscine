/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:01:55 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/26 17:04:05 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	tmp;
	int	counter;
	int	result;

	tmp = nb;
	counter = 1;
	while (counter != nb)
	{
		result = tmp / counter;
		if (result * result == nb)
			return (result);
		counter++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_sqrt(atoi(argv[1])));
	return (0);
}*/
