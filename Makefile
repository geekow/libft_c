#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By:  <>                                        +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/08/30 14:49:48 by                   #+#    #+#             *#
#*   Updated: 2016/09/08 01:29:29 by                  ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

SRC = ft_putchar.c ft_putstr.c ft_strlen.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_strnew.c ft_strdel.c ft_memdel.c ft_memalloc.c ft_strclr.c \
	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	ft_itoa.c ft_putendl.c ft_putnbr.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
	ft_isalpha.c ft_isdigit.c ft_atoi.c ft_strncmp.c ft_strcmp.c \
	ft_strstr.c ft_strnstr.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strlcat.c ft_memcpy.c ft_strchr.c \
	ft_strrchr.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: make

$(NAME): make

make:
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ar -s $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean make

