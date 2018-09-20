/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:31:33 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/10 15:07:47 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new != NULL)
	{
		while (*s1)
			*new++ = *s1++;
		while (*s2)
			*new++ = *s2++;
		*new = '\0';
		return (new - len);
	}
	else
		return (NULL);
}
