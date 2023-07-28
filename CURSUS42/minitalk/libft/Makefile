# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 17:54:24 by lucifern          #+#    #+#              #
#    Updated: 2023/07/28 15:48:59 by lucifern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#TARGET = libft #nombre del programa
NAME = libft.a

CFLAGS = -Werror -Wextra -Wall #banderas

FUNCTIONS = ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

OBJECTS = $(FUNCTIONS:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJBONUS = $(BONUS:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

.PHONY: all clean fclean re

clean:
	@rm -rf $(OBJECTS) $(OBJBONUS)

fclean: clean
	@rm -rf $(NAME)

re: fclean clean all

B = . # para que no se ejecute varias veces (relink)

bonus: $(B)

$(B): $(OBJBONUS) $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(OBJBONUS)
