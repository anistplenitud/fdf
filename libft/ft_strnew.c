/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:51:44 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/10 15:15:51 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*strnew;
	size_t		i;

	i = 0;
	strnew = (char *)malloc((size + 1) * sizeof(char));
	if (strnew != NULL)
		while (i <= size)
			strnew[i++] = '\0';
	return (strnew);
}
