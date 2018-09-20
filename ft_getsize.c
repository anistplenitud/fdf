/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getwidth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:44:51 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/26 12:30:31 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	ft_tryopen(char *file, int *width)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		*width = -1;
	return (fd);
}

static int	ft_tryline(char *line, int *width)
{
	if (line == NULL)
	{
		*width = -1;
		return (0);
	}
	return (1);
}

static int	ft_trycountw(char *line)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (line[i])
	{
		if (line[i] != ' ')
		{
			w++;
			i += ft_nlen(ft_atoi(line));
		}
		i++;
	}
	return (w);
}

void		ft_getsize(char *file, int *height, int *width)
{
	int		fd;
	char	*line;
	int		h;

	line = NULL;
	h = 0;
	fd = ft_tryopen(file, width);
	if (fd < 0)
		return ;
	while (get_next_line(fd, &line))
	{
		if (ft_tryline(line, width) == 0)
			return ;
		if (h == 0)
			*width = ft_trycountw(line);
		h++;
	}
	*height = h;
	close(fd);
}
