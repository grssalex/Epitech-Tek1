/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_

void my_putchar(char c);
void my_swap(int *a, int *b);


int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_isneg(int nb);
int my_strncmp(const char *s1, const char *s2, int n);
int my_strncpy(char *dest, char const *src, int n);
int my_get_nbr(char const *str);


char *my_revstr(char *str);
char *my_strstr(char *str, const char *to_find);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_concat_strings(char *dest, char const *src);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);

#endif /* !LIB_H_ */
