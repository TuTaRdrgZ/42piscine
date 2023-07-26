/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:05:13 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/24 16:56:55 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	int	chars;
	
	if (argc == 4)
	{	
		chars = atoi(argv[3]);
		printf("src = %s\n %s \n %d \n ", argv[1], argv[2], chars);
		printf("resultado = %s", ft_strncat(argv[1], argv[2], chars));
	}
	return (1);
}*/
