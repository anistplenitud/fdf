/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 14:38:47 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/28 15:42:51 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nlen(int nbr)
{
	int i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}
