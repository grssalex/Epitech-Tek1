/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** ----
*/
#include <ncurses.h>
#include <dirent.h>

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

int my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *string1, char const *string2);
char *my_strdup(char const *src);
int my_tolowercase(char *str);
int open_directory(char *path);

  #define HLOAD_AVG_H

typedef struct loadavg_struct {
    double one_minutes;
    double five_minutes;
    double fifteen_minutes;
}hloadavg_t;

void head(void);
void display_loadavg(void);
void display_time(void);
void display_boot_time(void);

void task(void);
void get_cpu_tasks(void);
int get_cpu_task_run(void);
void check_proc_dir(DIR *proc_dir);
int get_cpu_task_sleeping(void);
int get_cpu_task_sleeping(void);
int get_cpu_task_stopped(void);
void get_cpu_task_zombies(void);
void get_cpu_usage(void);

  #define MEMORY_T
typedef struct memory {
    double total_mem;
    double free_mem;
    double available_mem;
    double buffers;
    double cached;
    double used_mem;
} MemoryInfo_t;

void display_memory_info(void);
void check_file(FILE *file);
void get_swap_info(void);

  #define SWAP_T
typedef struct swap {
    long total_swap;
    long free_swap;
    long available_mem;
} SwapInfo_t;

void display_pid(void);
void back(void);

#endif /* MY_H */
