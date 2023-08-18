# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcamille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 14:11:01 by vcamille          #+#    #+#              #
#    Updated: 2023/03/01 15:44:51 by vcamille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = client

CFLAGS = -Wall -Werror -Wextra

SRCS = src/client.c src/server.c

OBJS = $(SRCS:.c=.o)

LIB = libft/libft.a libft/ft_printf/libftprintf.a
	

$(NAME) : $(OBJS)
	@cd libft && make
	@cd libft/ft_printf && make
	$(CC) $(CFLAGS) src/client.o $(LIB) -o $(NAME)
	$(CC) $(CFLAGS) src/server.o $(LIB) -o server
	
all : $(NAME) 

clean :
	@cd libft && make clean
	@cd libft/ft_printf && make clean
	rm -f $(OBJS)

fclean : clean
	@cd libft && make fclean
	@cd libft/ft_printf && make fclean
	rm -f client
	rm -f server

re : fclean all
