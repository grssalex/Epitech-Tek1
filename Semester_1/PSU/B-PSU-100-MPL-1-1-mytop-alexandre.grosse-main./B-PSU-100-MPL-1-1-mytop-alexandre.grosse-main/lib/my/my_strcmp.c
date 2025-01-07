/*
** EPITECH PROJECT, 2024
** lib_c
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_strcmp(const char *string1, const char *string2)
{
    char temp1[100];
    char temp2[100];
    int i = 0;

    my_strncpy(temp1, string1, 100);
    my_strncpy(temp2, string2, 100);
    my_tolowercase(temp1);
    my_tolowercase(temp2);
    while (temp1[i] != '\0' && temp2[i] != '\0') {
        if (temp1[i] != temp2[i]) {
            return (temp1[i] - temp2[i]);
        }
        i++;
    }
    return (0);
}
