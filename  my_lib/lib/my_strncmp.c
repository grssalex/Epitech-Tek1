/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_strncmp
*/

#include <stddef.h>

int my_strncmp(const char *s1, const char *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    return 0;
}
