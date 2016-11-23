/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrotogrid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:08:53 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 15:51:43 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	**ft_tetrotogrid(int **t, int nb_of_tetros, int width)
{
	int		i;
	int		id;

	id = 0;
	i = 0;
	while (id < nb_of_tetros)
	{
		i = 0;
		while (i < 4)
		{
			t[id][i] = t[id][i] + (t[id][i] / width);
			i++;
		}
		id++;
	}
	return (t);
}
