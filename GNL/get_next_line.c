/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:42:08 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/09 15:58:07 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_node(t_list **first, const int fd)
{
	t_list			*node;

	node = *first;
	while (node && node->fd != fd)
		node = node->next;
	if (!node)
	{
		NUL_RET_CHK(node = (t_list *)ft_memalloc(sizeof(t_list)));
		node->fd = fd;
		NUL_RET_CHK(node->str = ft_strnew(0));
		node->next = (t_list *)*first;
		*first = node;
	}
	return (node);
}

static int		ft_line(t_list **trvls, char **line)
{
	int i;

	i = 0;
	while ((*trvls)->str[i] && (*trvls)->str[i] != '\n')
		i++;
	if ((*trvls)->str[i] == '\n')
	{
		NEG_RET_CHK(*line = ft_strsub((*trvls)->str, 0, i));
		NEG_RET_CHK((*trvls)->temp = ft_strdup((*trvls)->str + i + 1));
		free((*trvls)->str);
		(*trvls)->str = (*trvls)->temp;
		(*trvls)->temp = NULL;
	}
	else if (!(*trvls)->str[i])
	{
		if (i == 0)
			return (0);
		*line = (*trvls)->str;
		(*trvls)->str = NULL;
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	static t_list	*first;
	t_list			*trvlist;
	char			buf[BUFF_SIZE + 1];

	NEG_RET_CHK(fd >= 0 && line);
	trvlist = get_node(&first, fd);
	while ((ret = read(trvlist->fd, &buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		NEG_RET_CHK(trvlist->temp = ft_strjoin(trvlist->str, buf));
		free(trvlist->str);
		trvlist->str = trvlist->temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	NEG_RET_CHK(ret >= 0);
	if (!ret && !trvlist->str)
		return (0);
	return (ft_line(&trvlist, line));
}
