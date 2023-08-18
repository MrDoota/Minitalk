# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcamille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 14:11:01 by vcamille          #+#    #+#              #
#    Updated: 2023/04/07 15:16:54 by vcamille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_putchar.c ft_putstr.c ft_printf.c ft_putnbr.c ft_hexa.c ft_ptr.c ft_print_unsigned.c

OBJS = $(SRCS:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJS)
	ar cr $(NAME) $(OBJS)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
