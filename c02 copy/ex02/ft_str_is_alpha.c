/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:16:55 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/11 13:28:14 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else if (str[i] != '\0')
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "holAcomoEstas42";
	int		result;

	result = ft_str_is_alpha(str);
	printf("%d", result);
	return (0);
}*/
