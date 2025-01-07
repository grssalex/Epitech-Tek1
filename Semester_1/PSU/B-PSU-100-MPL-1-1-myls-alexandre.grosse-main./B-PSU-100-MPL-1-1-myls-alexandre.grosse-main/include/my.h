/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** ----
*/

#include <time.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#ifndef MY_H
  #define MY_H
  #define MAX 1024

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
int my_strcmp(char const *string1, char const *string2);
char *my_strdup(char const *src);
int my_strcpy2(char *dest, char const *src, int n);

int open_directory(char *path);
void read_directory(const char *path);
void read_type(const char *path);

int check_directory_exist(const char *path);
void ls_stda(const char *path);

void display_time(const char *time_str);
void display_time2(const char *time_str);
void display_type(const char *path);
void display_permissions(mode_t mode);
void ls_flag_l(const char *path);
void build_filepath(char *filepath, const char *path, const char *filename);
void process_entry(const char *path, struct dirent *entry);
void display_permissions(mode_t mode);




#endif /* MY_H */
