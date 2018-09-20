/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:42:59 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/14 17:57:25 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	const char	*strptr;

	strptr = haystack;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	while (*haystack)
	{
		i = 0;
		if (n == 0)
			return (NULL);
		while (needle[i] && i < n && i < ft_strlen(needle))
			if (needle[i] != haystack[i])
				break ;
			else
				i++;
		if (i == ft_strlen(needle))
			return ((char *)haystack);
		haystack++;
		n--;
	}
	return (NULL);
}
