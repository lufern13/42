FLAGS= -Wall -Werror -Wextra
 
rush-02: main.o rush02.o valid_input.o write.o
	gcc $(FLAGS) -o rush-02  main.c rush02.c valid_input.c write.c
rush02.c: valid_input.o write.o
	gcc -c  valid_input.c write.c
main.c: rush02.o valid_input.o
	gcc -c  rush02.c valid_input.c
fclean:
	rm *.o rush-02
clean:
	rm *.o