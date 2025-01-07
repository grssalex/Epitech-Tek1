/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd01-alexandre.grosse
** File description:
** show_string
*/

#include "./include/my.h"

int show_string(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
