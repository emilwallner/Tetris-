/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:08:09 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 18:24:32 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"
#define BUF_SIZE 600

char	*ft_filetostr(char *file)
{
	int		ret;
	int		fd;
	char	*buffer;
	int		maxfile;
	char	*output;

	maxfile = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_errormsg(1);
		return (NULL);
	}
	if (!(buffer = (char*)malloc(sizeof(*buffer) * (BUF_SIZE + 1))))
		return (NULL);
	ret = read(fd, buffer, BUF_SIZE);
	buffer[ret] = '\0';
	output = ft_strdup(buffer);
	close(fd);
	free(buffer);
	return (output);
}
