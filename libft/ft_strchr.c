/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:32:16 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/06 09:25:46 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == 0)
		return ((char *)str + ft_strlen((char *)str));
	while (*str)
	{
		if (c == *str)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
