/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:28:24 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/16 17:51:04 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

bool	input_checker(char *str)
{
	int		i;
	int		x;
	bool	end;

	x = ft_strlen(str);
	end = false;
	i = 0;
	if (x == 16)
	{
		while (end == false && str[i + 4] != '\0')
		{
			if ((str[i] == '4' && str[i + 4] == '3') 
				|| (str[i] == '3' && str[i + 4] == '4') 
				|| (str[i] == '3' && str[i + 4] == '3') 
				|| (str[i] == '4' && str[i + 4] == '4') 
				|| (str[i] == '1' && str[i + 4] == '1'))
				end = true;
			else
				i++;
		}
	}
	else
		end = true;
	return (end);
}
