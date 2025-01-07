##
## EPITECH PROJECT, 2024
## Makefile lib
## File description:
## Makefile lib
##

SRCLIB		=		./lib/my/my_putchar.c \
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
                    ./src/head/first/hloadavg.c \
                    ./src/head/first/htime.c \
                    ./src/head/head.c \
                    ./src/head/first/hboot_time.c \
                    ./src/head/task/htask.c \
                    ./src/head/task/htasksleep.c \
                    ./src/head/task/taskrun.c \
                    ./src/head/task/hstopped.c \
                    ./src/head/task/hzombie.c \
                    ./src/head/memory/memory.c \
                    ./src/head/swap/swap.c \
                    ./src/back/pid/pid.c \
                    ./src/back/back.c \
                    ./src/other.c

SRCH		=		my.h

SRC2		=		./lib/my/my_putchar.c \
                    ./lib/my/my_put_float.c \
                    ./lib/my/my_put_nbr.c \
                    ./lib/my/my_getnbr.c \
                    ./lib/my/my_putstr.c \
                    ./lib/my/my_strlen.c \
                    ./lib/my/my_revstr.c \
                    ./lib/my/my_isneg.c \
                    ./lib/my/my_strcpy.c \
                    ./lib/my/my_swap.c \
                    ./lib/my/my_strcmp.c \
                    ./lib/my/my_strdup.c \
                    ./lib/my/my_strncpy.c \
                    ./lib/my/my_tolowercase.c \
                    ./tests/tests_lib.c \
                    ./lib/my/my_opendirectory.c \
                    ./lib/my/my_read_dir.c \
                    ./src/head/first/hloadavg.c \
                    ./src/head/first/htime.c \
                    ./src/head/head.c \
                    ./src/head/first/hboot_time.c \
                    ./src/head/task/htask.c \
                    ./src/head/task/htasksleep.c \
                    ./src/head/task/taskrun.c \
                    ./src/head/task/hstopped.c \
                    ./src/head/task/hzombie.c \
                    ./src/head/memory/memory.c \
                    ./src/head/swap/swap.c \
                    ./src/other.c \
                    ./tests/test_top.c

OBJLIB		=		$(SRCLIB:.c =.o)

NAME		= 		makefile

NAME2		=		unitest

ADD         =       -I./include -lncurses

all:
	cd lib/my
	gcc -c $(SRCLIB) -g3
	ar rc libmy.a *.o
	gcc ./main.c -lncurses libmy.a -o my_top -g3

tests_run:
	cd lib/my
	gcc -lcriterion --coverage -o $(NAME2) $(SRC2) -L. $(ADD) -lmy
	./$(NAME2)
	gcovr --exclude tests/ --txt-metric branch
	find . -name '*.o' -delete
	cd ../../


clean :
	rm *.o
	find . -name '*.gcno' -delete
	find . -name '*.gcda' -delete

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)
