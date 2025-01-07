/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd02-alexandre.grosse
** File description:
** my_strncmp
*/

#include <string.h>
#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; i != n && s1[i] != '\0' && s2[i] != '\0'; i++){
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    if (i != n)
        return s1[i] - s2[i];
    return 0;
}
