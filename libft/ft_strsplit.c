/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 07:35:23 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/11 13:20:51 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_fstrlen(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

static	size_t	ft_nwd(char const *s, char c)
{
	unsigned int	i;
	size_t			n_wd;

	i = 0;
	n_wd = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			n_wd++;
		}
		else
			i++;
	}
	return (n_wd);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t			n_wd;
	unsigned int	i;
	char			**s_grp;

	if (!s)
		return (NULL);
	n_wd = ft_nwd(s, c);
	s_grp = (char **)malloc((n_wd + 1) * sizeof(char *));
	i = 0;
	if (s_grp != NULL)
	{
		while (*s)
		{
			if (ft_fstrlen(s, c) != 0)
			{
				s_grp[i++] = ft_strsub(s, 0, ft_fstrlen(s, c));
				s += ft_fstrlen(s, c);
			}
			else
				s++;
		}
		s_grp[i] = NULL;
		return (s_grp);
	}
	return (NULL);
}
