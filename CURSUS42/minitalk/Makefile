# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 13:42:48 by lucifern          #+#    #+#              #
#    Updated: 2023/07/29 15:15:24 by lucifern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 
CLIENT = client
SERVER = server
CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus

CC = gcc
FLAGS = -Wall -Wextra -Werror

SERVER_SRC = server.c
CLIENT_SRC = client.c
SERVER_OBJ = $(SERVER_SRC:.c=.o)
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

SERVER_BONUS_SRC = server_bonus.c
CLIENT_BONUS_SRC = client_bonus.c
SERVER_BONUS_OBJ = $(SERVER_BONUS_SRC:.c=.o)
CLIENT_BONUS_OBJ = $(CLIENT_BONUS_SRC:.c=.o)

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft
INC =-I. -I$(LIBFT_PATH) #para que el compilador pueda encontrar tanto los 
# archivos fuente locales como los archivos fuente en el directorio libft/.

all: $(LIBFT) $(CLIENT) $(SERVER)

$(LIBFT):
	@make -C ./libft

$(CLIENT): $(CLIENT_OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(CLIENT_OBJ) $(LIBFT) -o client

$(SERVER): $(SERVER_OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(SERVER_OBJ) $(LIBFT) -o server

$(CLIENT_BONUS): $(CLIENT_BONUS_OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(CLIENT_BONUS_OBJ) $(LIBFT) -o client_bonus

$(SERVER_BONUS): $(SERVER_BONUS_OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(SERVER_BONUS_OBJ) $(LIBFT) -o server_bonus

clean:
	@make clean -C ./libft
	@rm -rf $(CLIENT_OBJ)
	@rm -rf $(SERVER_OBJ)
	@rm -rf $(CLIENT_BONUS_OBJ)
	@rm -rf $(SERVER_BONUS_OBJ)

fclean: clean
	make fclean -C ./libft
	@rm -rf $(CLIENT)
	@rm -rf $(SERVER)
	@rm -rf $(CLIENT_BONUS)
	@rm -rf $(SERVER_BONUS)

re: fclean all

.PHONY: all clean fclean re