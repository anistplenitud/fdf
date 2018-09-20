/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:19:10 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/25 15:34:24 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	*ft_str_to_int(char *str, int len)
{
	int *int_arr;
	int i;
	int nlen;

	int_arr = (int *)malloc(sizeof(int) * len);
	if (int_arr == NULL)
		return (NULL);
	i = 0;
	while (*str && i < len)
	{
		if (*str != ' ')
		{
			int_arr[i] = ft_atoi(str);
			nlen = ft_nlen(int_arr[i]);
			i++;
			str += nlen;
		}
		str++;
	}
	return (int_arr);
}
