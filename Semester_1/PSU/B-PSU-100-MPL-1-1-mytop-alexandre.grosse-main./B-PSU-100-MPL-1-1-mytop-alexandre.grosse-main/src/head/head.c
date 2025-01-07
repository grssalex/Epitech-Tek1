/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-bsmytop-alexandre.grosse
** File description:
** head
*/

#include "../../include/my.h"
#include <ncurses.h>

void head_cpu_memory_swap(void)
{
    display_memory_info();
    get_swap_info();
    printw("\n");
}

void head_second_line(void)
{
    get_cpu_tasks();
    get_cpu_task_run();
    get_cpu_task_sleeping();
    get_cpu_task_stopped();
    get_cpu_task_zombies();
}

void head_first_line(void)
{
    printw("top - ");
    display_time();
    printw(" up  ");
    display_boot_time();
    printw(",  ");
    printw("1 user,  ");
    display_loadavg();
}

void head(void)
{
    head_first_line();
    head_second_line();
    head_cpu_memory_swap();
}
