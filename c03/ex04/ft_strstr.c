/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:39:17 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/25 19:31:00 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#define NULL ((void *)0)

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*tf;

	if (!*str && !*to_find)
		return (str);
	while (*str)
	{
		s = str;
		tf = to_find;
		while (*s && *tf && *s == *tf)
		{
			++s;
			++tf;
		}
		if (!*tf)
			return (str);
		++str;
	}
	return (NULL);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s", ft_strstr(argv[1], argv[2]));
	return (0);
}*/
