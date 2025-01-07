##
## EPITECH PROJECT, 2024
## ultimate_lib_c
## File description:
## Makefile
##

AR		=	ar rc
RM		=	rm -rf

NAME	=	libgrssalex.a

SRC		=	$(wildcard *.c)
OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) *.o libgrssalex.a

fclean: clean
	$(RM) $(NAME)

re: fclean all

all_clean: $(NAME) clean
