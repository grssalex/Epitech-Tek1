/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-myls-alexandre.grosse
** File description:
** flag_l.c - Implementation of -l flag for detailed display
*/

#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

void build_filepath(char *filepath, const char *path, const char *filename)
{
    int i = 0;
    int j = 0;

    while (path[i] != '\0') {
        filepath[i] = path[i];
        i++;
    }
    filepath[i] = '/';
    i++;
    while (filename[j] != '\0') {
        filepath[i] = filename[j];
        i++;
        j++;
    }
    filepath[i] = '\0';
}

void ls_flag_l(const char *path)
{
    DIR *dir = opendir(path);
    struct dirent *entry;

    entry = readdir(dir);
    while (entry != NULL) {
        if (entry->d_name[0] != '.') {
            process_entry(path, entry);
        }
        entry = readdir(dir);
    }
    closedir(dir);
}
