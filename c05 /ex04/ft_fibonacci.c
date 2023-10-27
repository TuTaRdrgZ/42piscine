/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:06:06 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/24 16:25:16 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(15));
	return (0);
}*/
