/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** hstopped
*/

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <ncurses.h>
#include "../../../include/my.h"

int is_task_stopped(const char *path)
{
    FILE *status_file = fopen(path, "r");
    char bufferline[256];

    if (status_file == NULL)
        return 0;
    while (fgets(bufferline, sizeof(bufferline), status_file) != NULL) {
        if (strncmp(bufferline, "State:", 6) == 0) {
            fclose(status_file);
            return (strchr(bufferline, 'T') != NULL) ? 1 : 0;
        }
    }
    fclose(status_file);
    return 0;
}

int get_cpu_task_stopped(void)
{
    DIR *proc_dir = opendir("/proc");
    struct dirent *entry;
    int stopped_task = 0;
    char path[270];

    check_proc_dir(proc_dir);
    entry = readdir(proc_dir);
    while (entry != NULL) {
        if (isdigit(entry->d_name[0])) {
            snprintf(path, sizeof(path), "/proc/%s/status", entry->d_name);
            stopped_task += is_task_stopped(path);
        }
        entry = readdir(proc_dir);
    }
    closedir(proc_dir);
    printw("%d stopped, ", stopped_task);
}
