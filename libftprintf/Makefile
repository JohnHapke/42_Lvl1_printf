# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 14:43:55 by jhapke            #+#    #+#              #
#    Updated: 2025/05/11 12:57:01 by jhapke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

DIR_SRC = src
DIR_UTILS = $(DIR_SRC)/utils
INC_DIR = include

SOURCE = $(DIR_SRC)/ft_printf.c\
			$(DIR_UTILS)/char_string.c\
			$(DIR_UTILS)/numbers.c\

OBJS = $(SOURCE:.c=.o)

FLAGS = -Werror -Wall -Wextra

CC = gcc

HEADER = $(INC_DIR)/ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I$(INC_DIR) -c $< -o $@
	
clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re