/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
** File description:
** concat_strings
*/

#include <stdio.h>

char *concat_strings(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0'){
        i++;
    }
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
