/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:24:12 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/16 18:28:41 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

bool	input_checker(char *str);
char	*create_str(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2 && input_checker(create_str(argv[1])) == 0)
		write(1, "Los parametros son validos\n", 27);
	else
		write(1, "Los parametros no son validos\n", 30);
	return (1);
}
