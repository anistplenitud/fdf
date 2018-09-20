/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 10:59:57 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/15 07:11:33 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*c_str1;
	unsigned char	*c_str2;

	if (n == 0)
		return (0);
	c_str1 = (unsigned char *)str1;
	c_str2 = (unsigned char *)str2;
	while (c_str1 < (unsigned char *)str1 + n - 1)
	{
		if (*c_str1 != *c_str2)
			break ;
		else
		{
			c_str1++;
			c_str2++;
		}
	}
	return (*c_str1 - *c_str2);
}
