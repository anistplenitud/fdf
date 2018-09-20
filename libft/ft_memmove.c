/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:30:00 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/14 14:06:46 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*trvdst;
	unsigned char	*trvsrc;
	size_t			i;

	i = 0;
	trvdst = (unsigned char *)dest;
	trvsrc = (unsigned char *)src;
	if (dest > src)
	{
		trvdst += len - 1;
		trvsrc += len - 1;
		while (len > 0)
		{
			*trvdst-- = *trvsrc--;
			len--;
		}
	}
	else
		while (i < len)
		{
			*trvdst++ = *trvsrc++;
			i++;
		}
	return (dest);
}
