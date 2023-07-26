# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 13:42:48 by lucifern          #+#    #+#              #
#    Updated: 2023/07/26 18:55:59 by lucifern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 
CLIENT = client
SERVER = server

SERVER_SRC = server.c
CLIENT_SRC = client.c
SERVER_OBJ = $(SERVER_SRC:.c=.o)
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft
INC =-I. -I$(LIBFT_DIR) #para que el compilador pueda encontrar tanto los 
# archivos fuente locales como los archivos fuente en el directorio libft/.

all: $(CLIENT) $(SERVER)

$(LIBFT):
	make -C ./libft

$(CLIENT): $(LIBFT) $(CLIENT_OBJ)
	$(CC) $(FLAGS) $(LIBFT) $(CLIENT_OBJ) -o client

$(SERVER): $(LIBFT) $(SERVER_OBJ)
	$(CC) $(FLAGS) $(LIBFT) $(SERVER_OBJ) -o server

clean:
	make clean -C ./libft
	@rm -rf $(SERVER_OBJ)
	@rm -rf $(CLIENT_OBJ)

fclean: clean
	make fclean -C ./libft
	@rm -rf $(CLIENT)
	@rm -rf $(SERVER)

re: fclean all

.PHONY: all clean fclean re