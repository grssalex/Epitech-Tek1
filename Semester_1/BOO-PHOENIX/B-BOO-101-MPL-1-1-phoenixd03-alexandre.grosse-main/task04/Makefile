##
## EPITECH PROJECT, 2024
## B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
## File description:
## Makefile
##

CC      = gcc
CFLAGS  = -I../includes
LDFLAGS = -L../lib/phoenix -lphoenix
SRC     = show_params.c
OBJ     = $(SRC:.c=.o)
NAME    = show_params

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
