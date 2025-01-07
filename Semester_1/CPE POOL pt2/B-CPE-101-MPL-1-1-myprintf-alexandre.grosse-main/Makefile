##
## EPITECH PROJECT, 2024
## Makefile lib
## File description:
## Makefile lib
##

SRCLIB		=		./lib/my/libfunction/my_printf.c \
					./lib/my/libfunction/my_putchar.c \
					./lib/my/libfunction/my_putfloat.c \
					./lib/my/libfunction/my_put_nbr.c \
					./lib/my/libfunction/my_putstr.c \
					./lib/my/libfunction/my_strlen.c \
					./lib/my/otherfunction/if_int_or_string.c \
					./lib/my/otherfunction/nbr_length.c \
					./lib/my/otherfunction/putnbr_base_percent_p.c \
					./lib/my/percentfunction/callpercent.c \
					./lib/my/percentfunction/percent_e.c \
					./lib/my/percentfunction/percent_e_big.c \
					./lib/my/percentfunction/percent_e.c \
					./lib/my/percentfunction/percent_g.c \
					./lib/my/percentfunction/percent_g_big.c \
					./lib/my/percentfunction/percent_p.c \
					./lib/my/percentfunction/percent_u.c \
					./lib/my/percentfunction/percent_x.c \
					./lib/my/percentfunction/handle_space.c \
					./lib/my/percentfunction/verify_format.c \
					./lib/my/percentfunction/handle_plus.c \
					./lib/my/percentfunction/percent_o.c \
                    ./lib/my/percentfunction/percent_x_big.c \
					./lib/my/percentfunction/handle_dot.c

SRCH		=		my.h

SRC2		=	    ./lib/my/libfunction/my_printf.c \
                    ./lib/my/libfunction/my_putchar.c \
                    ./lib/my/libfunction/my_putfloat.c \
                    ./lib/my/libfunction/my_put_nbr.c \
                    ./lib/my/libfunction/my_putstr.c \
				    ./lib/my/libfunction/my_strlen.c \
				    ./lib/my/otherfunction/if_int_or_string.c \
				    ./lib/my/otherfunction/nbr_length.c \
				    ./lib/my/otherfunction/putnbr_base_percent_p.c \
				    ./lib/my/percentfunction/callpercent.c \
                    ./lib/my/percentfunction/percent_e_big.c \
                    ./lib/my/percentfunction/percent_e.c \
                    ./lib/my/percentfunction/percent_g.c \
                    ./lib/my/percentfunction/percent_p.c \
                    ./lib/my/percentfunction/percent_u.c \
                    ./lib/my/percentfunction/percent_g_big.c \
                    ./lib/my/percentfunction/percent_x.c \
                    ./lib/my/percentfunction/handle_space.c \
                    ./tests/test_my_printf.c \
					./lib/my/percentfunction/handle_plus.c \
					./lib/my/percentfunction/verify_format.c \
					./lib/my/percentfunction/percent_o.c \
					./lib/my/percentfunction/percent_x_big.c \
					./lib/my/percentfunction/handle_dot.c

NAME2 		=		testunit

all:
	cd lib/my
	gcc -c $(SRCLIB)
	ar rc libmy.a *.o
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
		find . -name '*.o' -delete

fclean: clean
		rm -f $(NAME)

re: fclean all
