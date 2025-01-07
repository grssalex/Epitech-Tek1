##
## EPITECH PROJECT, 2024
## Makefile lib
## File description:
## Makefile lib
##

SRCLIB =		    ./lib/my/my_putchar.c \
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
                    ./src/read_directory.c \
                    ./src/read_other.c \
                    ./src/check_perm_and_dir.c \
                    ./src/perm.c \
					./src/flag_l.c \
                    ./src/ls_std.c

SRCH =		my.h

SRC2 =				./lib/my/my_putchar.c \
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
                                ./src/read_directory.c \
                                ./src/check_perm_and_dir.c \
                                ./src/ls_std.c \
                                ./src/read_other.c \
                                ./tests/tests_lib.c

OBJLIB =		$(SRCLIB:.c =.o)

NAME = 		makefile

NAME2 =		unitest

all:
	cd lib/my
	gcc -c $(SRCLIB)
	ar rc libmy.a *.o
	gcc -g -Wall -Wextra ./src/main.c -lmy -L ./ -o my_ls
	rm *.o


tests_run:
	cd lib/my
	gcc -lcriterion --coverage -o $(NAME2) $(SRC2) -L. -lmy -I./include
	./$(NAME2)
	gcovr --exclude tests/ --txt-metric branch
	find . -name '*.o' -delete
	cd ../../
	find . -name '*.gcno' -delete
	find . -name '*.gcda' -delete

clean :
		rm *.o

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)
