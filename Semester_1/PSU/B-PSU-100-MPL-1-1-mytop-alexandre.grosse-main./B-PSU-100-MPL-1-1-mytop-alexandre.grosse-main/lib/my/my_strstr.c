/*
** EPITECH PROJECT, 2024
** my_strstr.c
** File description:
** --
*/

#include <stddef.h>
/*
** le role de strstr est de trouver la premiere occurence
** de la chaine de caractere occur dans la chaine de caractere str
*/

char *my_strstr(char *str, char const *occur)
{
    char *i;
    char *j;

    if (*occur == '\0') {
        return str;
    }
    while (*str != '\0') {
        i = str;
        j = occur;
        while (*j != '\0' && *i == *j) {
            i++;
            j++;
        }
        if (*j == '\0') {
            return str;
        }
        str++;
    }
    return NULL;
}
