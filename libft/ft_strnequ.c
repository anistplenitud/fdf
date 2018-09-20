/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:12:43 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/11 12:43:16 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	if (s1 && s2)
		while (i < n)
		{
			if (s1[i] == s2[i])
			{
				if (s2[i] == '\0' || i == n - 1)
					return (1);
			}
			else
				break ;
			i++;
		}
	return (0);
}
