/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroca-ab <aroca-ab@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:14:40 by aroca-ab          #+#    #+#             */
/*   Updated: 2023/07/25 09:10:09 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ft_getnb(int dicc)
{
	int			i;
	char		c[1];
	static char	str[128];

	i = 0;
	read(dicc, c, 1);
	while (c[0] == '\n')
	{
		read(dicc, c, 1);
	}
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(dicc, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_value(int dicc, char *c)
{
	int			i;
	static char	str[128];

	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(dicc, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_list	*define(char *file)
{
	int				i;
	int				dicc;
	char			c[1];
	static t_list	tab[128];
	char			*tmp;

	dicc = open(file, O_RDONLY);
	i = 0;
	while (i < 32)
	{
		tab[i].number = ft_atoi(ft_getnb(dicc));
		read(dicc, c, 1);
		while (c[0] == ' ')
			read(dicc, c, 1);
		if (c[0] == ':')
			read(dicc, c, 1);
		while (c[0] == ' ')
			read(dicc, c, 1);
		tmp = ft_value(dicc, c);
		tab[i].number_name = ft_ultimate_strncpy(tmp);
		i++;
	}
	close(dicc);
	return (tab);
}

int	checker(char *av1)
{
	int	dict;

	dict = open(av1, O_RDONLY);
	if (dict == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	else 
		return (1);
}
