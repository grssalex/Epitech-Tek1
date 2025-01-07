/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_strlowcase
*/

#include "../include/lib.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
