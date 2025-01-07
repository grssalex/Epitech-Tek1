##
## EPITECH PROJECT, 2024
## Makefile lib
## File description:
## Makefile lib
##

SRCLIB =    ./lib/my/my_putchar.c \
            ./lib/my/my_put_float.c \
            ./lib/my/my_put_nbr.c \
            ./lib/my/my_putstr.c \
            ./lib/my/my_strlen.c \
            ./lib/my/my_revstr.c \
            ./lib/my/my_strcpy.c \
            ./lib/my/my_swap.c \
            ./lib/my/my_isneg.c \
            ./lib/my/my_getnbr.c \
            ./lib/my/my_strcmp.c \
            ./lib/my/my_strdup.c \
            ./lib/my/my_strncpy.c \
            ./lib/my/my_tolowercase.c \
            ./lib/my/my_opendirectory.c \
            ./lib/my/my_read_dir.c \
            ./src/fnt.c \
            ./src/pika.c \
            ./src/other.c \
            ./src/fnt_next.c
SRCH =	my.h

OBJLIB = $(SRCLIB:.c =.o)

FLAGS = -L/usr/lib -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

OTFLAGS = -L. -lmy -I./include


all:
	cd lib/my
	gcc -c $(OBJLIB)
	ar rc libmy.a *.o
	gcc -g -Wall -Wextra ./main.c -lmy -L ./ -o my_hunter $(FLAGS) -g3
	rm *.o

clean :
		rm *.o

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)
