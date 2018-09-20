/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:59:06 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/10 15:20:06 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *ptr_end;

	ptr_end = (char *)str + ft_strlen((char *)str);
	if (c == '\0')
		return (ptr_end);
	while (ptr_end >= str)
	{
		if (c == *ptr_end)
			return (ptr_end);
		ptr_end--;
	}
	return (NULL);
}
