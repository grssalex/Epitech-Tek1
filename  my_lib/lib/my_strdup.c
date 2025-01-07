/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "../include/lib.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *dest;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
