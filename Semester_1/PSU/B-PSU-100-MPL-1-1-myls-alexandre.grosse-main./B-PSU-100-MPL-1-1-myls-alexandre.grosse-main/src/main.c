/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-myls-alexandre.grosse
** File description:
** main
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <dirent.h>

void process_directory(const char *path, int long_format)
{
    int check_result = check_directory_exist(path);

    if (check_result == 84) {
        return;
    }
    if (check_result == 0) {
        return;
    }
    if (long_format == 1) {
        ls_flag_l(path);
    } else {
        ls_stda(path);
    }
}

int check_path(const char *path)
{
    struct stat path_stat;
    DIR *dir = opendir(path);

    if (stat(path, &path_stat) != 0) {
        my_putstr("stat");
        return 84;
    }
    if (S_ISDIR(path_stat.st_mode)) {
        if (dir == NULL) {
            my_putstr("no perm\n");
            return 84;
        }
        closedir(dir);
    }
    return 0;
}

int main(int argc, char *argv[])
{
    const char *path = "./";
    int flag = 0;

    for (int i = 1; i < argc; i++) {
        if (my_strcmp(argv[i], "-l") == 0) {
            flag = 1;
        } else {
            path = argv[i];
        }
    }
    if (check_path(path) != 0) {
        return 84;
    }
    process_directory(path, flag);
    return 0;
}
