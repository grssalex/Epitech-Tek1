/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-myls-alexandre.grosse
** File description:
** my_strcmp
*/

#include "../../include/my.h"

int my_tolowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return 0;
}

int my_strcpy2(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return 0;
}

int my_strcmp(const char *string1, const char *string2)
{
    char temp1[100];
    char temp2[100];
    int i = 0;

    my_strcpy2(temp1, string1, 100);
    my_strcpy2(temp2, string2, 100);
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
