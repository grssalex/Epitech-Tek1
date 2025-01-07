##
## EPITECH PROJECT, 2024
## Makefile lib
## File description:
## Makefile lib
##

SRCLIB		=		./function/my/my_putchar.c \
                    ./function/my/my_put_float.c \
                    ./function/my/my_put_nbr.c \
                    ./function/my/my_putstr.c \
                    ./function/my/my_strlen.c \
                    ./function/my/my_revstr.c \
                    ./function/my/my_strcpy.c \
                    ./function/my/my_swap.c \
                    ./function/my/my_isneg.c \
                    ./function/my/my_getnbr.c \
                    ./function/setting_up/file_gest.c \
					./function/setting_up/replace_char_to_int.c \
                    ./function/setting_up/count_rows_cols.c \
                    ./main.c

SRCH		=		my.h

SRC2		=		./function/my/my_putchar.c \
                    ./function/my/my_put_float.c \
                    ./function/my/my_put_nbr.c \
                    ./function/my/my_putstr.c \
                    ./function/my/my_strlen.c \
                    ./function/my/my_revstr.c \
                    ./function/my/my_strcpy.c \
                    ./function/my/my_swap.c \
                    ./function/my/my_isneg.c \
                    ./function/my/my_getnbr.c \
                    ./function/setting_up/count_rows_and_columns.c \
                    ./function/setting_up/replace_char_to_int.c \
                    ./function/setting_up/square.c \
                    ./tests/tests_lib.c

OBJLIB		=		$(SRCLIB:.c =.o)

NAME		= 		setting_up

NAME2		=		unitest

all:
	cd function/my
	gcc -c $(SRCLIB)
	ar rc libmy.a *.o
	gcc -o setting_up ./main.c -lmy -L ./ -g3

tests_run:
	cd function/my
	gcc -lcriterion --coverage -o $(NAME2) $(SRC2) -L. setting_up -I./include
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
