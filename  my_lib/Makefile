##
## EPITECH PROJECT, 2024
## ultimate_lib_c
## File description:
## Makefile
##

CFLAGS  = -I../include -Wall -Wextra -Werror -g3
LDFLAGS = -L./lib -lgrssalex

CSFML 	= -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CRITERION = -lcriterion --coverage
GCOVRBR	= --exclude tests/ --txt-metric branch
GCOVRLN	= --exclude tests/ --txt-metric line
DIRTEST = ./tests/*.c ./lib/*.c

SRC    = $(wildcard *.c)
OBJ     = $(SRC:.c=.o)
NAME    = executable


all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib
	$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)
	make -C ./lib clean

clean:
	rm -f $(OBJ) executable coding-style-reports.log
	make -C ./lib clean

fclean: clean
	rm -f $(NAME)

re: fclean all

tests_run:
	make -C ./lib
	$(CC) $(DIRTEST) $(LDFLAGS) $(CRITERION) -o testunit
	./testunit
	gcovr $(GCOVRBR)
	gcovr $(GCOVRLN)
	find . -name "*.gcda" -delete
	find . -name "*.gcno" -delete
	rm testunit
	make -C ./lib clean

debug:
	make -C ./lib
	$(CC) $(SRC) $(LDFLAGS) -o $(NAME) -g3
	make -C ./lib clean
