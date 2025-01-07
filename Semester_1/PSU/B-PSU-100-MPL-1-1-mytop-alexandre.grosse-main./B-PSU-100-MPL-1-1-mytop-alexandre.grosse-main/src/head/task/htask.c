/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-bsmytop-alexandre.grosse
** File description:
** htask
*/

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <ncurses.h>
#include "../../../include/my.h"

void get_cpu_tasks(void)
{
    DIR *proc_dir = opendir("/proc");
    struct dirent *entry;
    int task_count = 0;

    check_proc_dir(proc_dir);
    entry = readdir(proc_dir);
    while (entry != NULL) {
        if (isdigit(entry->d_name[0])) {
            task_count++;
        }
        entry = readdir(proc_dir);
    }
    closedir(proc_dir);
    printw("Tasks: %d total, ", task_count);
}
