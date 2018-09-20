/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gfx.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:31:13 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/30 12:42:50 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <math.h>
# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "GNL/get_next_line.h"

typedef struct	s_xyco
{
	int		x;
	int		y;
	int		col;
}				t_xyco;
typedef struct	s_map
{
	int		x;
	int		y;
	int		xv;
	int		x1;
	int		y1;
	int		**grid;
	t_xyco	**xy_points;
	void	*mlx_ptr;
	void	*win_ptr;
}				t_map;
int				*ft_str_to_int(char *str, int len);
int				ft_nlen(int nbr);
void			ft_getsize(char *file, int *height, int *width);
void			ft_makegrid(t_map **map, char *file);
void			ft_dos(t_xyco **t, t_map *map, int b);
void			ft_dosv(t_xyco **t, t_map *map, int a);
void			ft_xyco_malloc(t_xyco ***xypoints, int y, int x);
#endif
