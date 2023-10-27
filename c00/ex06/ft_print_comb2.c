/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:42:10 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/08 17:59:18 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(char a, char b, char c, char d)
{
	if (a == 57 && b == 56 && c == 57 && d == 57)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ", ", 1);
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = 0 + '0';
	while (n1 <= 57)
	{
		n2 = 0 + '0';
		while (n2 <= 57)
		{
			n3 = n2;
			while (n3 <= 57)
			{
				n4 = n2 + 1;
				while (n4 <= 57)
				{
					write_num(n1, n2, n3, n4);
					n4++;
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
