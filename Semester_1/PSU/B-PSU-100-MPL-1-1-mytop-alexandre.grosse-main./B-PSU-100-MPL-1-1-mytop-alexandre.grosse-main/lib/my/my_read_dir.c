/*
** EPITECH PROJECT, 2024
** lib_c
** File description:
** my_read_dir
*/

#include <dirent.h>
#include <stddef.h>
#include "../../include/my.h"

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
