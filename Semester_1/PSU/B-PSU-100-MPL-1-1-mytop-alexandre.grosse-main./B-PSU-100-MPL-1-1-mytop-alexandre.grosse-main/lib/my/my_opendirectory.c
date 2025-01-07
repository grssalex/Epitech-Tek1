/*
** EPITECH PROJECT, 2024
** lib_c
** File description:
** my_opendirectory
*/

#include <dirent.h>
#include <stddef.h>

int open_directory(char *path)
{
    if (opendir(path) == NULL) {
        return (84);
    }
    if (opendir(path) != NULL) {
        return (0);
    }
}
