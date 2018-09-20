/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:13:37 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/11 13:55:05 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_result(size_t fsp, size_t lsp, char const **s)
{
	if (fsp == ft_strlen(*s))
		return (ft_strnew(0));
	else
		return (ft_strsub(*s, fsp, ft_strlen(*s) - fsp - lsp));
}

char		*ft_strtrim(char const *s)
{
	char	*strptr;
	size_t	fsp;
	size_t	lsp;

	lsp = 0;
	fsp = 0;
	if (!s)
		return (NULL);
	strptr = (char *)s;
	while (*strptr == ' ' || *strptr == '\n' || *strptr == '\t')
	{
		fsp++;
		strptr++;
	}
	while (*strptr)
		strptr++;
	strptr--;
	while (*strptr == ' ' || *strptr == '\n' || *strptr == '\t')
	{
		lsp++;
		strptr--;
	}
	return (ft_result(fsp, lsp, &s));
}
