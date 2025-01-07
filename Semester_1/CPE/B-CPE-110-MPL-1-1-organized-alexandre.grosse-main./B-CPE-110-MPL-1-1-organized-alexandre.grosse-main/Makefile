##
## EPITECH PROJECT, 2024
## pool_review
## File description:
## Makefile
##

CC			=		gcc
AR			=		ar rc
RM			=		rm -f
CFLAGS		=		-Wall -Wextra -I./include/ -g3
SFLAGS	=		-I./libshell/ -L./libshell

NAMESRC		=		src.a
SRCDIR		=		./src
SRCSRC		=		$(shell find $(SRCDIR) -name '*.c')
OBJSRC		=		$(SRCSRC:.c=.o)

NAMELIB		=		libmy.a
LIBDIR		=		./lib/my
SRCLIB		=		$(shell find $(LIBDIR) -name '*.c')
OBJLIB		=		$(SRCLIB:.c=.o)

RMLIBMY     =       libmy.a
RMOTHER		=		coding-style-reports.log
RMNAMELIB	=		$(NAMELIB)

MAIN		=		./main.c
BIN			=		-o organized
LIBSHELL	=		-lshell -L. -lmy

all: $(NAMELIB) $(NAMESRC)

$(NAMELIB): $(OBJLIB)
	$(AR) $(NAMELIB) $(OBJLIB)

$(NAMESRC): $(OBJSRC)
	$(CC) $(MAIN) $(OBJSRC) $(CFLAGS) $(LIBSHELL) $(NAMELIB) $(SFLAGS) $(BIN)

clean:
	$(RM) $(OBJLIB) $(RMLIBMY) $(RMOTHER) $(OBJSRC)

fclean: clean
	$(RM) $(NAME)

re: fclean all

tests_run:
