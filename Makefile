# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/25 10:22:54 by wkhosa            #+#    #+#              #
#    Updated: 2017/09/06 14:40:18 by wkhosa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCDIR = .

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_putnbr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	  ft_toupper.c ft_tolower.c ft_isascii.c ft_strncmp.c ft_atoi.c ft_isprint.c \
	  ft_whitespace.c ft_memcpy.c ft_strdup.c ft_strrchr.c ft_strchr.c ft_strcat.c ft_strstr.c \
	  ft_strcpy.c ft_strncpy.c ft_strncat.c ft_strlcat.c ft_strnstr.c ft_memccpy.c \
	  ft_memccpy.c ft_bzero.c ft_memset.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_itoa.c \
	  ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_putnbr.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
	  ft_toupper.o ft_tolower.o ft_isascii.o ft_strncmp.o ft_atoi.o  ft_isprint.o\
	  ft_whitespace.o ft_memcpy.o ft_strdup.o ft_strrchr.o ft_strchr.o ft_strcat.o ft_strstr.o \
	  ft_strcpy.o ft_strncpy.o ft_strncat.o ft_strlcat.o ft_strnstr.o ft_memccpy.o \
	  ft_memccpy.o ft_bzero.o ft_memset.o ft_memmove.o ft_memchr.o ft_memcmp.o \
	  ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_itoa.o \
	  ft_putendl.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

all: $(NAME)
$(NAME):
		$(CC) $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
