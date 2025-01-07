/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-myls-alexandre.grosse
** File description:
** perm
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

void display_special_file_type(mode_t mode)
{
    switch (mode & S_IFMT) {
        case S_IFCHR:
            my_putchar('c');
        break;
        case S_IFBLK:
            my_putchar('b');
        break;
        case S_IFIFO:
            my_putchar('p');
        break;
        case S_IFSOCK:
            my_putchar('s');
        break;
        default:
            my_putchar('-');
        break;
    }
}

void display_directory_type(mode_t mode)
{
    switch (mode & S_IFMT) {
        case S_IFDIR:
            my_putchar('d');
        break;
        case S_IFLNK:
            my_putchar('l');
        break;
        default:
            display_special_file_type(mode);
        break;
    }
}

void display_file_type(mode_t mode)
{
    if (S_ISREG(mode)) {
        my_putchar('-');
    } else {
        display_directory_type(mode);
    }
}

void display_permissions(mode_t mode)
{
    display_directory_type(mode);
    display_file_type(mode);
    my_putchar((mode & S_IRUSR) ? 'r' : '-');
    my_putchar((mode & S_IWUSR) ? 'w' : '-');
    my_putchar((mode & S_IXUSR) ? 'x' : '-');
    my_putchar((mode & S_IRGRP) ? 'r' : '-');
    my_putchar((mode & S_IWGRP) ? 'w' : '-');
    my_putchar((mode & S_IXGRP) ? 'x' : '-');
    my_putchar((mode & S_IROTH) ? 'r' : '-');
    my_putchar((mode & S_IWOTH) ? 'w' : '-');
    my_putchar((mode & S_IXOTH) ? 'x' : '-');
    my_putchar(' ');
}
