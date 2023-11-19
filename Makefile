# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javi <javi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:06:14 by javi              #+#    #+#              #
#    Updated: 2023/11/16 17:06:30 by javi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c	\
	ft_printf_char.c	\
	ft_printf_hex.c	\
	ft_printf_int.c	\
	ft_printf_ptr.c	\
	ft_printf_str.c	\
	ft_printf_uint.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ) ft_printf.h
		@ar rc $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: fclean all


