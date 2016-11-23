/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:33:39 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/22 18:24:19 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"

int	ft_checkfile(char *str)
{
	int i;

	if ((ft_strlen(str) + 1) % 21 != 0)
		return (0);
	if (ft_strlen(str) > 550)
		return (0);
	i = 0;
	while (ft_checkgrid(&str[i]) && ft_checktetro(&str[i]))
	{
		if (i + 20 == ft_strlen(str))
			return (1);
		i = i + 20;
		if (str[i] != '\n')
		{
			return (0);
		}
		i++;
	}
	if (i == ft_strlen(str))
		return (1);
	return (0);
}
