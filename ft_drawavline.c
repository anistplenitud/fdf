/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawavline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 15:18:12 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/25 15:22:18 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	ft_do_upv(t_xyco **t, t_map *map, int a, int b)
{
	int		j;
	int		i;
	double	m;

	j = t[b + 1][a].x;
	i = t[b + 1][a].y;
	m = (double)(t[b][a].y - t[b + 1][a].y) / (t[b][a].x - t[b + 1][a].x);
	while (j <= t[b][a].x)
	{
		mlx_pixel_put(map->mlx_ptr, map->win_ptr, j, i, t[b + 1][a].col);
		i = m * j + (t[b][a].y - m * t[b][a].x);
		j++;
	}
}

static void	ft_do_ddamv(t_xyco **t, t_map *map, int a, int b)
{
	int		j;
	int		i;
	double	m;

	j = t[b + 1][a].x;
	i = t[b + 1][a].y;
	m = (double)(t[b][a].y - t[b + 1][a].y) / (t[b][a].x - t[b + 1][a].x);
	while (i >= t[b][a].y)
	{
		mlx_pixel_put(map->mlx_ptr, map->win_ptr, j, i, t[b][a].col);
		j = (double)(i - (t[b][a].y - m * t[b][a].x)) / m;
		i--;
	}
}

static void	ft_do_ddapv(t_xyco **t, t_map *map, int a, int b)
{
	int		j;
	int		i;
	double	m;

	j = t[b + 1][a].x;
	i = t[b + 1][a].y;
	m = (double)(t[b][a].y - t[b + 1][a].y) / (t[b][a].x - t[b + 1][a].x);
	while (i <= t[b][a].y)
	{
		mlx_pixel_put(map->mlx_ptr, map->win_ptr, j, i, t[b][a].col);
		j = (double)(i - (t[b][a].y - m * t[b][a].x)) / m;
		i++;
	}
}

void		ft_dosv(t_xyco **t, t_map *map, int a)
{
	int		b;
	int		j;
	int		i;
	double	m;

	b = 0;
	while (b < map->y - 1)
	{
		j = t[b + 1][a].x;
		i = t[b + 1][a].y;
		m = (double)(t[b][a].y - t[b + 1][a].y) / (t[b][a].x - t[b + 1][a].x);
		if (fabs(m) < 1)
			ft_do_upv(t, map, a, b);
		else if (m < 0)
			ft_do_ddamv(t, map, a, b);
		else
			ft_do_ddapv(t, map, a, b);
		b++;
	}
}
