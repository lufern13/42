
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
MAIN = 

FUNCTIONS = 
OBJECTS = $(FUNCTIONS:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	@rm -rf $(FUNCTIONS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
