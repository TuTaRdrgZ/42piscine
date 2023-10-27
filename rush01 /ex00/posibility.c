/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:49:16 by gpallare          #+#    #+#             */
/*   Updated: 2023/07/16 17:46:36 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	matrix_size(int col, int size)
{
	char	**mat;
	int		i;

	mat = (char **)malloc(4 * 8);
	i = 0;
	while (i < mat[4])
	{
		mat[i] = (int *)malloc(col * sizeof(int));
	}
	i++;
}

void	ft_posibility(int map[4][4], int col, int row)
{
	char	check_one[2];
	char	check_two[3];
	char	check_three[1];
	char	check_one_r_two[2];
	char	check_two_r_two[6];

	check_one[0] = "4123";
	check_one[1] = "4213";
	check_two[0] = "4231";
	check_two[1] = "4123";
	check_two[2] = "4312";
	check_three[0] = "4321";

	check_one_r_two[0] = "3214";
	check_one_r_two[1] = "4213";
	check_two_r_two[0] = "3142";
	check_two_r_two[1] = "3412";
	check_two_r_two[2] = "1423";
	check_two_r_two[3] = "2413";
	check_two_r_two[4] = "2143";
	check_two_r_two[5] = "3241";
}

int	free_mem(char **mat)
{

}