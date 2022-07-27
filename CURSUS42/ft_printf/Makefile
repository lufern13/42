# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 19:08:18 by lucifern          #+#    #+#              #
#    Updated: 2022/04/25 13:31:01 by lucifern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
MAIN = main.c

FUNCTIONS = ft_printf.c ft_putchr.c ft_putstr.c ft_putptr.c\
			ft_putnbr_base.c ft_putnbr_unsig.c
OBJECTS = $(FUNCTIONS:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
