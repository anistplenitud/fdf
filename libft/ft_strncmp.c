/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:06:12 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/11 12:33:35 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i])
	{
		if (i == n - 1 || str1[i] == '\0')
			return (0);
		else
			i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
