##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

SRC = 		$(shell ls *.c)

FLAGS =		-Wall -Wextra -W -I ./

NAME =		rush3

all:	build
	gcc -o $(NAME) *.o $(FLAGS)

clean:
	rm -f *.o

fclean:
	$(clean)
	rm -f rush3

re: fclean all

build:	$(SRC)
	gcc -o main.o $(FLAGS) main.c -c
	gcc -o my_getsqr.o $(FLAGS) my_getsqr.c -c
	gcc -o my_lib.o $(FLAGS) my_lib.c -c
	gcc -o my_putstr_error.o $(FLAGS) my_putstr_error.c -c
	gcc -o my_methods.o $(FLAGS) my_methods.c -c
