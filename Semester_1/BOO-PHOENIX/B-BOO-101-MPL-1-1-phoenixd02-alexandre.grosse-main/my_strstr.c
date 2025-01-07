/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd02-alexandre.grosse
** File description:
** my_strstr
*/

#include <stdlib.h>
#include <stdio.h>


char *my_strstr(char *str, const char *to_find)
{
    int i = 0;

    if (!*to_find)
        return str;
    for (int j = 0; str[j] != '\0'; j++) {
        while (str[j + i] == to_find[i] && to_find[i] != '\0') {
            i++;
        }
        if (to_find[i] == '\0') {
            return &str[j];
        }
    }
    return NULL;
}
