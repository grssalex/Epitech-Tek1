/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** hzombie
*/

#include <ncurses.h>
#include <dirent.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "../../../include/my.h"

int is_task_zombie(const char *path)
{
    FILE *status_file = fopen(path, "r");
    char bufferline[300];

    if (status_file == NULL)
        return 0;
    while (fgets(bufferline, sizeof(bufferline), status_file) != NULL) {
        if (strncmp(bufferline, "State:", 6) == 0) {
            fclose(status_file);
            return (strchr(bufferline, 'Z') != NULL) ? 1 : 0;
        }
    }
    fclose(status_file);
    return 0;
}

void get_cpu_task_zombies(void)
{
    DIR *proc_dir = opendir("/proc");
    struct dirent *entry;
    int zombie_task = 0;
    char path[270];

    check_proc_dir(proc_dir);
    entry = readdir(proc_dir);
    while (entry != NULL) {
        if (isdigit(entry->d_name[0])) {
            snprintf(path, sizeof(path), "/proc/%s/status", entry->d_name);
            zombie_task += is_task_zombie(path);
        }
        entry = readdir(proc_dir);
    }
    closedir(proc_dir);
    printw("%d zombies\n", zombie_task);
}
