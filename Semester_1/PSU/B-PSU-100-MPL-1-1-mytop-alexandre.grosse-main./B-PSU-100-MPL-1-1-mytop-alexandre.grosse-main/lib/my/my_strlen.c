/*
** EPITECH PROJECT, 2024
** my_strlen.c
** File description:
** my_strlen.c
*/

#include "../../include/my.h"
/*
** fonction qui compte le nombre de caractère
** dans une chaine de caractère
** passé en paramètre et retourne le nombre
** de caractère dans la chaine de caractère
*/

int my_strlen(char const *str)
{
    int nombre = 0;

    while (str[nombre] != '\0') {
        nombre = nombre + 1;
    }
    return (nombre);
}
