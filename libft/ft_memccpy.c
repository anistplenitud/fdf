/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 09:57:58 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/06 08:40:20 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *trvsrc;
	unsigned char *trvdst;

	trvsrc = (unsigned char *)src;
	trvdst = (unsigned char *)dest;
	while (trvsrc < (unsigned char *)src + n)
	{
		*trvdst = *trvsrc;
		if (*trvsrc == (unsigned char)c)
			return ((void *)++trvdst);
		trvdst++;
		trvsrc++;
	}
	return (NULL);
}
