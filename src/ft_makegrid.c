/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makegrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:58:16 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/22 15:56:09 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_makegrid(int i)
{
	int		j;
	char	*str;

	str = (char*)malloc(sizeof(char) * (i * (i + 1) + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (j < i * (i + 1) - 1)
	{
		if ((j + 1) % (i + 1) != 0)
			str[j] = '.';
		else
			str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
