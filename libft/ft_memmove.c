/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:20:18 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/15 17:22:35 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void	*tmp;

	tmp = ft_strnew(len);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, len);
		dest = ft_memcpy(dest, tmp, len);
		free(tmp);
	}
	return (dest);
}
