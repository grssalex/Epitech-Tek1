/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** ----
*/

#ifndef MY_H
  #define MY_H

int my_strlen(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_put_float(float num);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
char *my_strstr(char *str, char const *occur);
void my_swap(int *a, int *b);
int my_getnbr(char const *str);
int my_isneg(int nombre);

int replace_char_to_int(char const *filepath, int x);
int open_fd(int fd);
int read_file(const char *filepath, char **buffer, int *file_size);
void replace_chars_in_buffer(char *buffer);
int get_file_size(const char *filepath);

int count_rows(char const *filepath, int file_size);

void find_largest_square(char *buffer, int rows, int cols);


#endif /* MY_H */
