/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-bsmyls-alexandre.grosse
** File description:
** read_directory
*/

#include <dirent.h>
#include <stddef.h>
#include <unistd.h>
#include "../include/my.h"


int open_directory(char *path)
{
    if (opendir(path) == NULL) {
        return (84);
    }
    if (opendir(path) != NULL) {
        return (0);
    }
}

void read_directory(const char *path)
{
    DIR *dir = opendir(path);
    struct dirent *entry;

    open_directory((char *)path);
    entry = readdir(dir);
    while (entry != NULL) {
        my_putstr(entry->d_name);
        my_putstr("\n");
        entry = readdir(dir);
    }
    closedir(dir);
}
