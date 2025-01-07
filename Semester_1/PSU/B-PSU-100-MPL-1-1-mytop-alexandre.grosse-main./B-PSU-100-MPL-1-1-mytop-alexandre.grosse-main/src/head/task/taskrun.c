/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** taskrun
*/

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <ncurses.h>
#include <unistd.h>
#include "../../../include/my.h"

// snprintf permet d'acceder au fichier status si is digits est bon
// fgets permet de lire les lignes tant que on atteint pas le buffer lines
// strncmp pour pouvoir avancer dans les lignes du fichier jusqu'a state :
// strchr permet de trouve la premiere R dans la ligne contenant State:
// l'opérateur ternaire permet de retourner 1 si le processus est en
// cours et 0 si il est en pause
int is_task_running(const char *path)
{
    FILE *status_file = fopen(path, "r");
    char bufferline[256];

    if (status_file == NULL)
        return 0;
    while (fgets(bufferline, sizeof(bufferline), status_file) != NULL) {
        if (strncmp(bufferline, "State:", 6) == 0) {
            fclose(status_file);
            return (strchr(bufferline, 'R') != NULL) ? 1 : 0;
        }
    }
    fclose(status_file);
    return 0;
}

int get_cpu_task_run(void)
{
    DIR *proc_dir = opendir("/proc");
    struct dirent *entry;
    int running_task = 0;
    char path[270];

    check_proc_dir(proc_dir);
    entry = readdir(proc_dir);
    while (entry != NULL) {
        if (isdigit(entry->d_name[0])) {
            snprintf(path, sizeof(path), "/proc/%s/status", entry->d_name);
            running_task += is_task_running(path);
        }
        entry = readdir(proc_dir);
    }
    closedir(proc_dir);
    printw("%d running,  ", running_task);
}
