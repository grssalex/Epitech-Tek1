/*
** EPITECH PROJECT, 2024
** reverse_string
** File description:
** reverse_string
*/

#include "./include/my.h"

char *reverse_string(char *str)
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
