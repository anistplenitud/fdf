/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:45:09 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/10 15:32:31 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (newstr != NULL)
	{
		while (i < len)
		{
			newstr[i] = s[start + i];
			i++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	else
		return (NULL);
}
