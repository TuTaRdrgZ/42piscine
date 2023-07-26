/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpovill- <mpovill-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:04:21 by mpovill-          #+#    #+#             */
/*   Updated: 2023/07/25 20:17:25 by mpovill-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct t_map_type
{
	int n_lines;
	char empty;
	char full;
	char obstacle;
} t_map;

int    next_n(char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\n')
        i++;
    return (i);
}

int	check_line(char *line, t_map map, int length)
{
    int    line_length;

    line_length = next_n(line);
    if (length != line_length)
        return (0);
    while (*line != '\0')
    {
        if (*line != map.empty || *line != map.obstacle)
            return (0);
        line++;
    }
    return (1);
}

void    ft_copy(char *dest, char *src, unsigned int n)
{
    int    i;

    i = 0;
    while (i < n - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

char    *read_line(char *first)
{
    char            *line;
    unsigned int     length;

    length = next_n(first);
    if (length == 0)
        return (0);
    line = (char* )malloc((length + 1) * sizeof(char));
    if (!line)
    {
        free(line);
        return (0);
    }
    ft_copy(line, first, length);
    return (line);
}

int	find_character_valid(char *str, t_map map)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == map.empty)
          return (1);
        i++;
    }
    return (0);
}

/*
 * Checks if the map is valid. If it is, returns 1
 * if not, returns 0
 */
int    is_map_valid(char *str, int length, t_map map)
{
    int		i;
    char	*line;
	
	if (!find_character_valid(str, map))
		return (0);
    i = next_n(str) + 1;
    while (i < length)
    {
        line = read_line(str + i);
        if (check_line(line, map, length) == 0)
        {
        	free(line);
            return (0);
        }
        i += next_n(str + i) + 1;
		free(line);
    }
    return (1);
}

int	check_values(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (str[i] != '\n')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	length = i;
	i = 0;
	while (i < length - 3)
	{
		printf("%c\n", str[i]);
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if ((str[length - 1] == str[length - 2]
			|| str[length - 2] == str [length - 3]
			|| str[length - 1] == str[length - 3]))
		return (0);
	return (length);
}

int    mini_atoi(char *str)
{
    int    i;
    int    result;

    i = 0;
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
        result = result * 10 + str[i++] - '0';
	return (result);
}

int	get_rows(char *str, int length)
{
	char	*number;
	int		num;
	int		i;

	number = (char *)malloc(sizeof(char) * length);
	if (number == NULL)
		return (0);
	i = 0;
	while (i < length - 3)
	{
		number[i] = str[i];
		i++;
	}
	number[i] = '\0';
	num = mini_atoi(number);
	free(number);
	return(num);
}

int	is_first_line_valid(char *file_str, t_map *t_map)
{
	int		length;
	int		rows;
	char	*line;


	length = check_values(file_str);
	if (length == 0)
		return (0);
	line = read_line(file_str);
	if (line == 0)
		return (0);
	rows = get_rows(line, length);
	if (rows == 0)
		return (0);
	t_map->n_lines = rows;
	t_map->empty = file_str[length - 3];
	t_map->full = file_str[length - 2];
	t_map->obstacle = file_str[length - 1];
	return (length);
}

/*
 * Cheks if the file is valid.
 * Starts checking if the firts line is valid, and if it is
 * it checks all the lines are equal and valid
 * Return 0 is not valid, one if valid
 *
 *
 * !!!! free file_str !!!!!!!!warning!!!!!!!!!!!!!!
 */
t_map*	is_file_valid(char *str)
{
	int		length;
	int		check;
	t_map	*map;

	// malloc t_map
	// returns 0 if not valid, length of first line if valid
	map = (t_map* )malloc(sizeof(t_map));
	if(map == 0)
		return (0);
	length = is_first_line_valid(str, map);
	if (length == 0)
	{
		//free(&map);
		// free str
		return (0);
	}
	if (!is_map_valid(str, length, *map))
	{
		//free(&map);
		// free str
		return (0);
	}
	return (map);
}
