#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By:  <>                                        +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/08/30 14:49:48 by                   #+#    #+#             *#
#*   Updated: 2016/09/02 15:50:35 by                  ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

SRC = ft_putchar.c ft_putstr.c ft_strlen.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_strnew.c ft_strdel.c ft_memdel.c ft_memalloc.c ft_strclr.c \
	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: make

$(NAME): make

make:
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean make

