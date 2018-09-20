/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xyco_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 14:25:20 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/27 16:12:41 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_xyco_malloc(t_xyco ***xypoints, int y, int x)
{
	int		i;
	t_xyco	**xy_points;

	xy_points = *xypoints;
	i = 0;
	while (i < y)
	{
		xy_points[i] = (t_xyco *)malloc(sizeof(t_xyco) * x);
		if (xy_points[i] == NULL)
		{
			ft_putstr("Insufficient Memory\n");
			exit(0);
		}
		i++;
	}
}
