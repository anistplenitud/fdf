/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:42:29 by amampuru          #+#    #+#             */
/*   Updated: 2018/07/25 16:10:41 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "../libft/libft.h"
# define BUFF_SIZE 200
# define NEG_RET_CHK(c) if (!(c)) return (-1);
# define NUL_RET_CHK(c) if (!(c)) return (NULL);

typedef struct		s_list
{
	char			*temp;
	char			*str;
	int				bytes;
	int				fd;
	struct s_list	*next;
}					t_list;

int					get_next_line(const int fd, char **line);

#endif
