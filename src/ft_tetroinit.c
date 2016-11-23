/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetroinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 08:29:22 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 18:26:43 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		**ft_tetroinit(int **t, int nb_of_tetros, int width)
{
	int		i;
	int		id;

	id = 0;
	while (id < nb_of_tetros)
	{
		i = -1;
		if (width == 2)
			while (++i < 4)
				t[id][i] = t[id][i] - ((t[id][i] / 5) * 2);
		if (width == 3)
			while (++i < 4)
				t[id][i] = t[id][i] - (t[id][i] / 5);
		if (width > 4)
			while (++i < 4)
				t[id][i] = t[id][i] + ((t[id][i] / 5) * (width - 4));
		id++;
	}
	return (t);
}
