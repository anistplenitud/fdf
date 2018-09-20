/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:56:34 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/06 12:12:02 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*ptr_mem;

	i = 0;
	ptr_mem = (unsigned char *)malloc(size * sizeof(unsigned char));
	if (ptr_mem == NULL)
		return (NULL);
	else
	{
		while (i < size)
		{
			ptr_mem[i] = 0;
			i++;
		}
		return ((void *)ptr_mem);
	}
}
