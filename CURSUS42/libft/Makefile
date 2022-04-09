# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 17:54:24 by lucifern          #+#    #+#              #
#    Updated: 2022/04/09 19:57:31 by lucifern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#TARGET = libft #nombre del programa
NAME = libft.a

CFLAGS = -Werror -Wextra -Wall #banderas

MAIN = main.c

FUNCTIONS = ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

OBJECTS = $(FUNCTIONS:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJBONUS = $(BONUS:.c=.o)

$(NAME): $(OBJECTS)
	#gcc -c $(CFLAGS) $(FUNCTIONS) 
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

.PHONY: all clean fclean re

fclean: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(OBJECTS) $(OBJBONUS)

re: fclean all

B = . # para que no se ejecute varias veces (relink)

bonus: $(B)

$(B): $(OBJBONUS) $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(OBJBONUS)

#################### EJECUTAR TESTER: #####################
# https://github.com/alelievr/libft-unit-test
# EN LA CARPETA: rm *.o && rm *.a && gcc -c -Wall -Wextra -Werror *.c && ar -cr libft.a *.o
# EN LA DEL TESTER: make f


################### FILE DESCRIPTOR: ######################
#Las dos operaciones básicas sobre file descriptors son:

#read(fd, buffer, tam)
	#Lee bytes de fd y los pone en un buffer de tamaño tam.
#write(fd, buffer, tam)
	#Toma los primeros tam bytes de buffer y los envía al file descriptor fd.