/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:43:58 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/20 15:34:06 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if ((nb == 0) || (nb == 1))
		return (1);
	else if (nb > 1)
	{
		while (nb >= 1)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0); 
}
/*
int main()
{
  printf("%d", ft_iterative_factorial(12));
  return (0);
}*/
