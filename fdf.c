/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gfx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:46:18 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/30 12:42:34 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_project(t_map **fmap)
{
	int		i;
	int		j;
	t_map	*map;

	map = *fmap;
	i = 0;
	while (i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			map->xv = 10 * j + 500;
			map->x1 = map->xv * cos(0.523599) - (10 * i) * sin(1.0472);
			map->y1 = map->xv * sin(0.523599) + (10 * i) * cos(1.0472);
			map->xy_points[i][j].x = map->x1;
			map->xy_points[i][j].y = map->y1 - map->grid[i][j];
			map->xy_points[i][j].col = 0xFF00FF + 10 * map->grid[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < map->y)
		free(map->grid[i++]);
	free(map->grid);
}

static int		try_init(t_map *map, int option)
{
	if (option == 0 && map == NULL)
	{
		ft_putstr("Insufficient Memory to create variables\n");
		exit(0);
	}
	else if (option == 1 && map->x <= 0)
	{
		ft_putstr("Invalid or Empty File.\n");
		exit(0);
	}
	else if (option == 2 && map->grid == NULL)
	{
		ft_putstr("Map OK ! Try another release of FDF :-)\n");
		exit(0);
	}
	else if (option == 3 && map->xy_points == NULL)
	{
		ft_putstr("Insufficient Memory\n");
		exit(0);
	}
	return (1);
}

static int		my_key_funct(int keycode, void *param)
{
	if (keycode == 53)
		exit(0);
	if (param)
		return (0);
	return (0);
}

static void		ft_placemap(t_map **fmap)
{
	int		i;
	t_map	*map;

	i = 0;
	map = *fmap;
	while (i < map->y)
		ft_dos(map->xy_points, map, i++);
	i = 0;
	while (i < map->x)
		ft_dosv(map->xy_points, map, i++);
	i = 0;
	while (i < map->y)
		free(map->xy_points[i++]);
	free(map->xy_points);
}

int				main(int ac, char **av)
{
	t_map	*map;

	if (ac >= 2)
	{
		map = (t_map *)malloc(sizeof(t_map));
		try_init(map, 0);
		ft_getsize(av[1], &map->y, &map->x);
		try_init(map, 1);
		ft_makegrid(&map, av[1]);
		try_init(map, 2);
		map->xy_points = (t_xyco **)malloc(sizeof(t_xyco *) * map->y);
		try_init(map, 3);
		ft_xyco_malloc(&map->xy_points, map->y, map->x);
		map->mlx_ptr = mlx_init();
		map->win_ptr = mlx_new_window(map->mlx_ptr, 1020, 900, "fdf");
		ft_project(&map);
		ft_placemap(&map);
		mlx_key_hook(map->win_ptr, my_key_funct, 0);
		mlx_loop(map->mlx_ptr);
		free(map);
	}
	else
		ft_putstr("No input\n");
	return (0);
}
