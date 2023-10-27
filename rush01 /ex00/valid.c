/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:58:12 by gpallare          #+#    #+#             */
/*   Updated: 2023/07/16 16:23:53 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int map[4][4], int row, int col)
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		if (r != row && map[r][col] == map[row][col])
		{
			return (0);
		}
		r++;
	}

	c = 0;
	while (c < 4)
	{
		if (c != col && map[row][c] == map[row][col])
		{
			return (0);
		}
		c++;
	}
}
