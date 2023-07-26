/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:30:46 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/16 15:00:03 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*create_str(char *str)
{
	int				i;
	int				j;
	static char		newstr[16];

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			newstr[j] = str[i];
			i++;
			j++;
		}
		else
			i++;
	}
	return (newstr);
}
