/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd02-alexandre.grosse
** File description:
** my_strupcase
*/
#include <stdio.h>
#include <stddef.h>

char *my_strupcase(char *str)
{
    int i = 0;

    if (str == NULL)
        return NULL;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
