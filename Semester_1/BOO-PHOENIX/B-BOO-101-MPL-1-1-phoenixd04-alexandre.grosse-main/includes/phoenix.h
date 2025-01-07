/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
** File description:
** phoenix
*/

#ifndef PHOENIX_H_
    #define PHOENIX_H_
void my_putchar(char c);
int show_number(int nb);
int show_string(char const *str);
char *reverse_string(char *str);
int to_number(char const *str);
int is_prime_number(int nb);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
char *concat_parameters(int argc, char **argv);
#endif /* !PHOENIX_H_ */
