/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makegrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 15:47:22 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/26 13:00:31 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	ft_try_ptr(unsigned char *s, t_map **fmap)
{
	t_map	*map;

	map = *fmap;
	if (s == NULL)
	{
		map->grid = NULL;
		return (-1);
	}
	return (1);
}

void		ft_makegrid(t_map **fmap, char *file)
{
	int		i;
	char	*line;
	int		fd;
	t_map	*map;

	line = NULL;
	map = *fmap;
	map->grid = (int **)malloc(sizeof(int *) * (map->y));
	if (map->grid == NULL)
		return ;
	i = 0;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &line))
	{
		if (ft_try_ptr((unsigned char *)(line), fmap) == -1)
			return ;
		else
		{
			map->grid[i] = ft_str_to_int(line, map->x);
			if (ft_try_ptr((unsigned char *)map->grid[i], fmap) == -1)
				return ;
			i++;
		}
	}
	close(fd);
}
