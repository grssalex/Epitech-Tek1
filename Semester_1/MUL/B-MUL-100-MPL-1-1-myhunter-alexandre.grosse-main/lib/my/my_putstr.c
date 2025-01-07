/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** écrire une fonction qui affiche 1/1 caractere chaine
*/

#include "../../include/my.h"
/*
** fonction qui permet d'écrire une chaine de caractère
** passé en paramètre et retourne 0
** tant que la chaine n'est pas fini
** on affiche chaque caractère
*/

int my_putstr(char const *str)
{
    int chaine = 0;

    while (str[chaine] != '\0') {
        my_putchar(str[chaine]);
        chaine = chaine + 1;
    }
    return 0;
}
