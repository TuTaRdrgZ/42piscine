/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:52:48 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/24 13:25:50 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct t_list
{
	char	*number_name;
	int		number;
}			t_list;

int		checker(char *av1);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_ultimate_strncpy(char *src);
char	*ft_getnb(int dicc);
char	*ft_value(int dicc, char *c);
t_list	*define(char *file);
int		num_dec(int number);
int		infinity(int number);
void	print(int n, t_list *tab, int *first);
