/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:49:42 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/22 12:43:44 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_checkcount(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
			count++;
		i++;
	}
	if (count != 4)
		return (0);
	return (1);
}

int	ft_checkexpection(char *str)
{
	int j;

	j = 0;
	if (str[j + 3] == '#' && str[j + 4] == '#' && str[j + 5] == '#')
		return (1);
	if (str[j + 5] == '#' && str[j + 9] == '#' && str[j + 10] == '#')
		return (1);
	if (str[j + 4] == '#' && str[j + 5] == '#' && str[j + 10] == '#')
		return (1);
	if (str[j + 4] == '#' && str[j + 5] == '#' && str[j + 6] == '#')
		return (1);
	if (str[j + 1] == '#' && str[j + 4] == '#' && str[j + 5] == '#')
		return (1);
	if (str[j + 4] == '#' && str[j + 5] == '#' && str[j + 9] == '#')
		return (1);
	return (0);
}

int	ft_checktetro(char *str)
{
	int i;
	int j;

	if (!ft_checkcount(str))
		return (0);
	j = 0;
	i = 0;
	while (str[j] != '#' && j < 20)
		j++;
	i = j + 1;
	while (i < 20)
	{
		if (str[i] == '#')
			if (str[i - 1] != '#' && str[i - 5] != '#')
				return (ft_checkexpection(&str[j]));
		i++;
	}
	return (1);
}
