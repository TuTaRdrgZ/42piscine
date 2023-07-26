/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:31:40 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/25 10:13:07 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "library.h"
#include <unistd.h>

int	num_dec(int number)
{
	if (number >= 90)
		return (90);
	else if (number >= 80)
		return (80);
	else if (number >= 70)
		return (70);
	else if (number >= 60)
		return (60);
	else if (number >= 50)
		return (50);
	else if (number >= 40)
		return (40);
	else if (number >= 30)
		return (30);
	else if (number >= 20)
		return (20);
	else if (number <= 20)
		return (number);
	else
		return (0);
}

int	infinity(int number)
{
	if (number >= 1000000000)
		return (1000000000);
	else if (number >= 1000000)
		return (1000000);
	else if (number >= 1000)
		return (1000);
	else if (number >= 100)
		return (100);
	else
		return (num_dec(number));
}

void	print(int n, t_list *tab, int *first)
{
	int	i;
	int	multiple;

	i = 0;
	multiple = infinity(n);
	if (multiple >= 100)
		print(n / multiple, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].number != multiple)
		i++;
	ft_putstr(tab[i].number_name);
	if (multiple != 0 && n % multiple != 0)
		print(n % multiple, tab, first);
}

int	main(int argc, char *argv[])
{
	t_list	*tab;
	int		*first;
	int		first_address;

	first_address = 1;
	first = &first_address;
	if (argc == 2 && ft_atoi(argv[1]) > 0)
	{
		tab = define("numbers.dict");
		print(ft_atoi(argv[1]), tab, first);
		free(tab->number_name);
	}
	else if (!(argv[1] == NULL) && argc == 3 
		&& ft_atoi(argv[2]) > 0 && checker(argv[1]) == 1)
	{
		tab = define(argv[1]);
		print(ft_atoi(argv[2]), tab, first);
		free(tab->number_name);
	}
	else if (argc < 2 || argc > 3 || ft_atoi(argv[1]) < 0)
		write(1, "Error\n", 6);
	return (0);
}
