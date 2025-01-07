/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-myls-alexandre.grosse
** File description:
** check_perm_and_dir
*/

#include "../include/my.h"
#include <sys/stat.h>

int check_directory_exist(const char *path)
{
    struct stat path_stat;

    if (stat(path, &path_stat) < 0) {
        my_putstr("file or directory not found\n");
        return 84;
    }
    if (S_ISREG(path_stat.st_mode)) {
        my_putstr(path);
        my_putstr("\n");
        return 0;
    }
    if (S_ISDIR(path_stat.st_mode)) {
        return 1;
    }
    return 0;
}
