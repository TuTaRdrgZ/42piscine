/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:20:14 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/24 16:20:43 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_sort_char_tab(char *tab)
{
	char	tmp;
	int		i;
	int		len;

	len = ft_strlen(tab);
	i = 0;
	while (++i < len)
	{
		if (tab[i] < tab[i - 1])
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			i = 0;
		}
	}
}

int	check_base(char *base)
{
	int	i;
	int	len;

	ft_sort_char_tab(base);
	i = 0;
	len = ft_strlen(base);
	if ((*base == '\0') || (*base == 1))
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == base[i + 1])
			return (0);
		else if ((base[i] == '+') || (base[i] == '-')
			|| (base[i] == '='))
			return (0);
		i++;
	}
	return (1);
}

int	ft_rec_test(int nbr, char *base, int length, int module)
{
	if (nbr / length < 1)
		write(1, &base[nbr], 1);
	else
		write(1, &base[ft_rec_test(nbr / length,
				base, length, nbr % length)], 1);
	return (module);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = ft_strlen(base);
	check_base(base);
	ft_rec_test(nbr, base, len, 0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}*/
