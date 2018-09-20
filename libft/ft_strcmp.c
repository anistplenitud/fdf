/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:52:58 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/08 15:08:48 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	while ((unsigned char)(*str1) == (unsigned char)(*str2))
	{
		if (*str1 != '\0')
		{
			str1++;
			str2++;
		}
		else
			return (0);
	}
	return ((unsigned char)(*str1) - (unsigned char)(*str2));
}
