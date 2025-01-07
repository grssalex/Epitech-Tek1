##
## EPITECH PROJECT, 2024
## B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
## File description:
## Makefile
##

AR		=	ar rc
RM		=	rm -rf

NAME	=	libphoenix.a

SRC		=	$(wildcard *.c)
OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
