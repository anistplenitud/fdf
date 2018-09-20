/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 11:10:43 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/07 10:30:39 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	ft_strpop(char **strptr, int i, int n, int n_sign)
{
	char *str;

	str = *strptr;
	str[i] = '\0';
	while (--i >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (n_sign == -1)
		str[0] = '-';
}

char		*ft_itoa(int n)
{
	int		n_sign;
	int		i;
	char	*str;

	n_sign = 1;
	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n_sign = -1;
		i++;
		n *= -1;
	}
	i += ft_count(n);
	str = (char *)malloc((i + 1) * (sizeof(char)));
	if (str)
		ft_strpop(&str, i, n, n_sign);
	return (str);
}
