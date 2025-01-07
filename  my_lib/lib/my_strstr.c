/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_strstr
*/

#include <stdlib.h>
#include <stdlib.h>

char *my_strstr(char *str, const char *to_find)
{
    int i = 0;

    if (to_find[0] == '\0')
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
