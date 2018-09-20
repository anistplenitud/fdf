/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:00:39 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/15 09:47:41 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_chk_i(unsigned int i, int n_sign)
{
	if (i == 19 && n_sign == -1)
		return (0);
	else if (i == 19 && n_sign == 1)
		return (-1);
	else
		return (1);
}

int			ft_atoi(const char *str)
{
	int				result;
	int				n_sign;
	unsigned int	i;

	result = 0;
	n_sign = 1;
	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n_sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		if (result != 0)
			i++;
		str++;
		if (ft_chk_i(i, n_sign) == 0 || ft_chk_i(i, n_sign) == -1)
			return (ft_chk_i(i, n_sign));
	}
	return (result * n_sign);
}
