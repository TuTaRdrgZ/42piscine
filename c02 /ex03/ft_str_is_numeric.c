/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:35:26 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/11 13:05:41 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	str[] = "";
	int		result;

	result = ft_str_is_alpha(str);
	printf("%d", result);
	return (0);
}*/
