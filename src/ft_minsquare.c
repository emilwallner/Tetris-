/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minsquare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:08:58 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 16:26:18 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_minsquare(int nb_of_tetros)
{
	int		i;
	int		nbr;

	nbr = nb_of_tetros;
	if (nb_of_tetros == 1)
		return (2);
	i = 2;
	nbr = nbr * 4;
	while (i * i < nbr)
		i++;
	return (i);
}
