# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 14:43:55 by jhapke            #+#    #+#              #
#    Updated: 2025/01/09 09:28:14 by jhapke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCE = ft_printf_character.c\
		ft_printf_decimal.c\
		ft_printf_hexadecimal_low.c\
		ft_printf_hexadecimal_up.c\
		ft_printf_percent.c\
		ft_printf_pointer.c\
		ft_printf_string.c\
		ft_printf_unsigned.c\
		ft_printf.c\

OBJS = $(SOURCE:.c=.o)

FLAGS = -Werror -Wall -Wextra

CC = gcc

HEADER = printf.h

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c $(SOURCE)
		ar rcs $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re