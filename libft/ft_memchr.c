/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 12:31:05 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/11 17:00:41 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *b_str;
	unsigned char b;

	b = (unsigned char)c;
	b_str = (unsigned char *)str;
	while ((void *)b_str < str + n)
	{
		if (b == *b_str)
			return ((void *)b_str);
		b_str++;
	}
	return (NULL);
}
