/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:29:47 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/15 16:11:35 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	rush(int x, int y);

int	main(int argc, char **argv)
{
	rush(argv[1], argv[2]);
	return (0);
}
