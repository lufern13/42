TARGET = libft #nombre del programa
CFLAGS = -Werror -Wextra -Wall #banderas

libft: *.c *.o 
	gcc $(CFLAGS) -o libft *.c *.o
libft.o: *.c libft.h
	gcc $(CFLAGS) -c libft.o
fclean:
	rm *.o libft
clean:
	rm *.o