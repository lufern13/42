# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 13:42:48 by lucifern          #+#    #+#              #
#    Updated: 2023/02/14 12:45:09 by lucifern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client server
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: server client

client: client.c
	$(CC) $(FLAGS) client.c -o client

server: server.c
	$(CC) $(FLAGS) server.c -o server

clean:
	$(RM) $(NAME)
