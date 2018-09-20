# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amampuru <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 10:59:15 by amampuru          #+#    #+#              #
#    Updated: 2018/07/30 12:44:48 by amampuru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = clang

CFLAGS = -Wall -Wextra -Werror 

SRC = fdf.c ft_nlen.c ft_str_to_int.c ft_drawaline.c ft_drawavline.c \
	ft_makegrid.c ft_getsize.c ft_xyco_malloc.c GNL/get_next_line.c

HEADER = fdf.h

OBJ = $(SRC:.c=.o)

%.o : %.c $(HEADER)
	@$(CC) -c -o $@ $< $(CFLAGS)

.PHONY : all clean fclean re

all : $(HEADER) $(OBJ)
	@make -C libft/
	@$(CC) $(CFLAGS) -o fdf $(OBJ) libft/libft.a \
	   	-lmlx -framework OpenGL -framework AppKit

clean :
	@make clean -C libft/
	@rm -f $(OBJ)

fclean : clean
	@rm -f libft/libft.a
	@rm -f fdf

re : fclean all
