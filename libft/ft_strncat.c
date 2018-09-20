/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:07:45 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/06 09:43:02 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	c;

	c = 0;
	i = ft_strlen(dest);
	while (*src && c < n)
	{
		dest[i] = *src;
		i++;
		c++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
