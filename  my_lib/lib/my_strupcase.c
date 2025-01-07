/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_strupcase
*/

#include "../include/lib.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
