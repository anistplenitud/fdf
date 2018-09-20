# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amampuru <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/15 09:06:15 by amampuru          #+#    #+#              #
#    Updated: 2018/06/15 09:38:46 by amampuru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.
 
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	  ft_memchr.c ft_memcmp.c ft_strdup.c ft_strncpy.c ft_strcpy.c \
	  ft_strlcat.c ft_strncat.c ft_strcat.c ft_strrchr.c ft_strchr.c \
	  ft_strnstr.c ft_strstr.c ft_strncmp.c ft_strcmp.c ft_atoi.c \
	  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isalnum.c \
	  ft_isalpha.c ft_isdigit.c ft_putchar.c ft_putstr.c ft_strlen.c \
	  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	  ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o : %.c $(DEPS)
	@$(CC) -c -o $@ $< $(CFLAGS)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f libft.a

re : fclean all
