/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** pid
*/

/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** pid
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <ctype.h>
#include <ncurses.h>
#include "../../../include/my.h"

void display_pid(void)
{
    DIR *dir;
    struct dirent *entry;
    int pid;

    dir = opendir("/proc");
    check_proc_dir(dir);
    entry = readdir(dir);
    while (entry != NULL) {
        if (isdigit(entry->d_name[0])) {
            pid = atoi(entry->d_name);
            printw("%d\n", pid);
        }
        entry = readdir(dir);
    }
    closedir(dir);
}
