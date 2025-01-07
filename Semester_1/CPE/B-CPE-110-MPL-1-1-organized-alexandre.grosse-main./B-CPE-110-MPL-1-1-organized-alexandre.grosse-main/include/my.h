/*
** EPITECH PROJECT, 2024
** pool_review
** File description:
** my
*/

    #include "../libshell/shell.h"
#ifndef MY_H_
    #define MY_H_

int my_putchar(char c);
int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(void);
int my_isneg(int n);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int add(void *data, char **args);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);

    #define LINKED_T
typedef struct linked_s {
    void *data;
    char *name;
    char *type;
    int id;
    struct linked_s *next;
    struct linked_s *prev;
} linked_t;

    #define NODE_T

int check_type(char *type);
int check_len_args(char **args);
int display_add(char *type, int id, char *name);
#endif /* !MY_H_ */
