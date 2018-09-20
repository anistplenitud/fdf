/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:55:11 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/07 12:05:48 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*stri;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	stri = (char *)malloc((len + 1) * sizeof(char));
	if (stri != NULL)
	{
		while (*s)
			*stri++ = (*f)(i++, *s++);
		*stri = '\0';
		return (stri - len);
	}
	else
		return (NULL);
}
