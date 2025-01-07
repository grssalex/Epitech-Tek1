##
## EPITECH PROJECT, 2024
## B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
## File description:
## Makefile
##

CC      = gcc
CFLAGS  = -I../includes -I../lib/phoenix
LDFLAGS = -L../lib/phoenix -lphoenix
SRC     = concat_parameters.c
OBJ     = $(SRC:.c=.o)
NAME    = concat_parameters

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../lib/phoenix
	$(CC) $(CFLAGS) $(OBJ) ./main.c $(LDFLAGS) -o $(NAME)
	make clean -C ../lib/phoenix

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
