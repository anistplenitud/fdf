/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:24:28 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/13 15:10:58 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t len;

	len = ft_strlen(dest);
	if (n < len)
		return (ft_strlen(src) + n);
	if (n > len)
		ft_strncat(dest, src, n - len - 1);
	return (len + ft_strlen((char *)src));
}
