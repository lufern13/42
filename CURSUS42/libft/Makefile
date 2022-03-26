# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 17:54:24 by lucifern          #+#    #+#              #
#    Updated: 2022/03/26 18:00:36 by lucifern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft #nombre del programa
NAME = libft.a
CFLAGS = -Werror -Wextra -Wall #banderas
MAIN = main.c
FUNCTIONS = ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c

$(NAME): *.c *.o 
	gcc $(CFLAGS) -o $(NAME) $(FUNCTIONS) $(MAIN)
libft.o: *.c libft.h
	gcc $(CFLAGS) -c libft.o
fclean:
	rm *.o libft
clean:
	rm *.o
#################### EJECUTAR TESTER: #####################
# https://github.com/alelievr/libft-unit-test
# EN LA CARPETA: rm *.o && rm *.a && gcc -c -Wall -Wextra -Werror *.c && ar -cr libft.a *.o
# EN LA DEL TESTER: make f