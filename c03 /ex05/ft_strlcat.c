/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:11:44 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/24 16:39:45 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	x = ft_strlen(dest);
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	while (src[i] != '\0' && x < size - 1 && size > 0)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	if (destlen > size)
		destlen = size;
	return (destlen + srclen);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("Destino = %s\n", argv[1]);
		printf("Source = %s\n", argv[2]);
		printf("Size = %d\n", atoi(argv[3]));
		printf("Size necesario = %d", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
	}
	return (1);
}*/
