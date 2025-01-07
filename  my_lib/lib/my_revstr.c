/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_revstr
*/

#include "../include/lib.h"

char *my_revstr(char *str)
{
    int len = 0;
    char temp;

    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return str;
}
