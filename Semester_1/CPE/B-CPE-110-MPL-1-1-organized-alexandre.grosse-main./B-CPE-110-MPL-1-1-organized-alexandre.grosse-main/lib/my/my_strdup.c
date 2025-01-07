/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-organized-alexandre.grosse
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    int i = 0;

    if (dest == NULL)
        return NULL;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
