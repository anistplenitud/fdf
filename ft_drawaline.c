/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawaline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:04:45 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/25 15:32:24 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	ft_do_up(t_xyco **t, t_map *map, int b, int a)
{
	int		j;
	int		i;
	double	m;

	j = t[b][a].x;
	i = t[b][a].y;
	m = (double)(t[b][a + 1].y - t[b][a].y) / (t[b][a + 1].x - t[b][a].x);
	while (j <= t[b][a + 1].x)
	{
		mlx_pixel_put(map->mlx_ptr, map->win_ptr, j, i, t[b][a].col);
		i = m * j + (t[b][a].y - m * t[b][a].x);
		j++;
	}
}

static void	ft_do_ddaym(t_xyco **t, t_map *map, int b, int a)
{
	int		j;
	int		i;
	double	m;

	j = t[b][a].x;
	i = t[b][a].y;
	m = (double)(t[b][a + 1].y - t[b][a].y) / (t[b][a + 1].x - t[b][a].x);
	while (i >= t[b][a + 1].y)
	{
		mlx_pixel_put(map->mlx_ptr, map->win_ptr, j, i, t[b][a].col);
		j = (double)(i - (t[b][a].y - m * t[b][a].x)) / m;
		i--;
	}
}

static void	ft_do_ddayp(t_xyco **t, t_map *map, int b, int a)
{
	int		j;
	int		i;
	double	m;

	j = t[b][a].x;
	i = t[b][a].y;
	m = (double)(t[b][a + 1].y - t[b][a].y) / (t[b][a + 1].x - t[b][a].x);
	while (i <= t[b][a + 1].y)
	{
		mlx_pixel_put(map->mlx_ptr, map->win_ptr, j, i, t[b][a].col);
		j = (double)(i - (t[b][a].y - m * t[b][a].x)) / m;
		i++;
	}
}

void		ft_dos(t_xyco **t, t_map *map, int b)
{
	int		a;
	int		j;
	int		i;
	double	m;

	a = 0;
	while (a < map->x - 1)
	{
		j = t[b][a].x;
		i = t[b][a].y;
		m = (double)(t[b][a + 1].y - t[b][a].y) / (t[b][a + 1].x - t[b][a].x);
		if (fabs(m) < 1)
			ft_do_up(t, map, b, a);
		else if (m < 0)
			ft_do_ddaym(t, map, b, a);
		else
			ft_do_ddayp(t, map, b, a);
		a++;
	}
}
