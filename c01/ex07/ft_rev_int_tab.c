/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:49:41 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/11 18:21:04 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	tmp;

	i = 0;
	tmp = i;
	x = size -1;
	while (i != size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[x];
		tab[x] = tmp;
		i++;
		x--;
	}
}
/*
int	main(void)
{
	int	ptr[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(ptr, 5);
	return (0);
}*/
