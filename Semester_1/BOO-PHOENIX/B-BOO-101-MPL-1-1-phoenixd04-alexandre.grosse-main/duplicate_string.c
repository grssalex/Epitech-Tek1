/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd04-alexandre.grosse
** File description:
** duplicate_string
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return i;
}

char *duplicate_string(char const *src)
{
    char *dup = malloc(sizeof(char) * my_strlen(src) + 1);
    int i = 0;

    if (dup == NULL)
        return NULL;
    while (src[i] != '\0'){
        dup[i] = src[i];
        i++;
    }
    return dup;
}
