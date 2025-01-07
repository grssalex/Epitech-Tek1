/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-myls-alexandre.grosse
** File description:
** ls_std
*/

#include <dirent.h>
#include <unistd.h>
#include "../include/my.h"
#include <stdlib.h>
#include <string.h>

void print(char **tab, int count)
{
    int line_count = 0;

    for (int i = 0; i < count; i++) {
        my_putstr(tab[i]);
        my_putstr(" ");
        free(tab[i]);
        line_count++;
    }
    if (line_count != 0) {
        my_putstr("\n");
    }
}

void filter_dir(DIR *dir, char **tab, int *count)
{
    struct dirent *entry = readdir(dir);

    while (entry != NULL) {
        if (my_strcmp(entry->d_name, ".") != 0 &&
            my_strcmp(entry->d_name, "..") != 0) {
            tab[*count] = my_strdup(entry->d_name);
            (*count)++;
        }
        entry = readdir(dir);
    }
}

void sort(char **tab, int j)
{
    char *temp;

    if (my_strcmp(tab[j], tab[j + 1]) > 0) {
        temp = tab[j];
        tab[j] = tab[j + 1];
        tab[j + 1] = temp;
    }
}

void bubble_sort(char **tab, int count)
{
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            sort(tab, j);
        }
    }
}

void ls_stda(const char *path)
{
    DIR *dir = opendir(path);
    char *tab[MAX];
    int count = 0;

    filter_dir(dir, tab, &count);
    bubble_sort(tab, count);
    print(tab, count);
    closedir(dir);
}
